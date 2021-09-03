#include "Connect.h"

using namespace std;

static int port = 54000;                                   /*Port connect to server*/
static std::string IpAddress = "127.0.0.1";                /*Ip Address of server*/
static WSAData datas;
static WORD ver = MAKEWORD(2, 2);
static SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);      /*Socket connect by protocol TCP/IP*/


/**********************************************************************************************
* @Func: Connect to Server by TCPIP
*
*
***********************************************************************************************/
void Connect::Connect_TCPIP()
{
	/*Initialize WinSock*/
	int wsResult = WSAStartup(ver, &datas);

	if (wsResult != 0)
	{
		std::cerr << "Can't start winsock, Err #" << wsResult << endl;
		return;
	}

	/*creating socket;*/
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_SOCKET)
	{
		cerr << "can't Creat socket, Err #" << WSAGetLastError() << endl;
		return;
	}

	/*Fill in a hint structure*/
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(port);
	inet_pton(AF_INET, IpAddress.c_str(), &hint.sin_addr);

	/*connect to server*/
	int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));

	/*Check stream connect Server*/
	if (connResult == SOCKET_ERROR)
	{
		cerr << "can't Connect to server, Err #" << WSAGetLastError() << endl;
		closesocket(sock);
		WSACleanup();
		return;
	}
}


/**********************************************************************************************
* @Func: Disconnect with Server
*
*
***********************************************************************************************/
void Connect::Disconnect()
{
	closesocket(sock);
	WSACleanup();
}

/**********************************************************************************************
* @Func: Set turn Player continued
*
*
***********************************************************************************************/
void Connect::SetTurn(int turn)
{
	this->Turn = turn;
}

/**********************************************************************************************
* @Func: Get Turn player
*
*
***********************************************************************************************/
int Connect::GetTurn()
{
	return this->Turn;
}

/**********************************************************************************************
* @Func: Send To Message Server
*
*
***********************************************************************************************/
void Connect::SendMassage(std::string Message)
{
	send(sock, Message.c_str(), Message.size() + 1, 0);      /* Send Data to Server*/
}


/**********************************************************************************************
* @Func: Listenning Server
*
*
***********************************************************************************************/
char* Connect::ReceiveMessage()
{
	char Buffer[1024] = { 0 };

	while (recv(sock, Buffer, 1024, 0) < 0);

	return Buffer;
}


/**********************************************************************************************
* @Func: Split Data being sent
*
*
***********************************************************************************************/
void Connect::SplitAxis(std::string buff, int* data)
{
	int Element;
	int Index2 = 0;
	int Index1;
	int length = buff.length();

	for (Index1 = 0; Index1 < length; Index1++)
	{
		Element = (int)(buff[Index1] - 48);
		if (Element >= 0 && Element <= 10)
		{
			*(data + Index2) = Element;
			Index2++;
		}
	}
}


/**********************************************************************************************
* @Func: Check Conditional get out Match
*
*
*
***********************************************************************************************/
void Connect::Check_out(Board& BOARD, int* Check)
{
	char choose = ' ';
	int out = -1;

	do {
		system("CLS");
		std::cout << "Do you want to play again?" << std::endl << "Enter'y' to play new game/ 'n' -> Get out " << std::endl;
		cin >> choose;
		switch (choose)
		{
		case 'y':
			BOARD.Init();
			BOARD.DrawBoard();
			*Check = 1;
			out = 1;
			break;
		case 'n':
			*Check = 0;
			out = 1;
			break;
		default:
			break;
		}
	} while (out == -1);

}


/**********************************************************************************************
* @Func: TEST COMMUNICATE
*
*
*
***********************************************************************************************/
void Connect::Communicate()
{
	Board OBB;
	Play OAA;

	int Count = 0;//kiem tra luot danh 
	char player = ' ';

	/*Toa do danh*/
	int AxisX;
	int AxisY;

	//chuoi tach du lieu
	int Axis[2];
	char* PlayLoad = NULL;

	int End;
	int Choose;

	char buf[4096];
	string userInput;

	int GetOut = 0;/*dieu kien thoat*/

	int Turn = 0;

	/*Connect To Server*/
	Connect_TCPIP();

	/*Send/Receive data to/from Server*/
	cout << "SERVER> " << string(ReceiveMessage()) << endl;
	OBB.Init();
	OBB.DrawBoard();

	do
	{
		/* Send signals "ready" to Server*/
		SendMassage(READY);

		PlayLoad = ReceiveMessage();

		if (std::string(PlayLoad) == "1")
		{
			Turn = 1;
			player = X;
		}
		else if (std::string(PlayLoad) == "2")
		{
			Turn = 2;
			player = O;
		}
	} while (0);

	/* Comunicate play Game*/
	do
	{
		if (Turn == 1)
		{
			PlayLoad = NULL;
			cout << "Turn Of Player " << player << ">> ";
			getline(cin, userInput);

			SplitAxis(userInput, &Axis[0]);

			AxisX = Axis[0];
			AxisY = Axis[1];

			if (OAA.PlayGame(OBB, AxisX, AxisY, &Count, &player) == 1)
			{
				Check_out(OBB, &GetOut);
				if (GetOut == 1)
				{
					player = X;
				}
				else
				{
					break;
				}
			}
			else
			{
				/*None*/
			}

			/*Send Inform Turn*/
			SendMassage(userInput);
			cout << "Turn Of Player " << player << " Waiting Your Turn... ";

			PlayLoad = ReceiveMessage();
			SplitAxis(string(PlayLoad), &Axis[0]);

			AxisX = Axis[0];
			AxisY = Axis[1];

			if (OAA.PlayGame(OBB, AxisX, AxisY, &Count, &player) == 1)
			{
				Check_out(OBB, &GetOut);
				if (GetOut == 1)
				{
					player = X;
				}
				else
				{
					break;
				}
			}
			else
			{
				/*None*/
			}
		}
		else if (Turn == 2)
		{
			PlayLoad = NULL;
			
			PlayLoad = ReceiveMessage();
			SplitAxis(string(PlayLoad), &Axis[0]);

			AxisX = Axis[0];
			AxisY = Axis[1];

			if (OAA.PlayGame(OBB, AxisX, AxisY, &Count, &player) == 1)
			{
				Check_out(OBB, &GetOut);
				if (GetOut == 1)
				{
					player = O;
				}
				else
				{
					break;
				}
			}
			else
			{
				/*None*/
			}

			/*Start Enter Turn*/
			cout << "Turn Of Player " << player << ">> ";
			getline(cin, userInput);

			SplitAxis(userInput, &Axis[0]);

			AxisX = Axis[0];
			AxisY = Axis[1];

			if (OAA.PlayGame(OBB, AxisX, AxisY, &Count, &player) == 1)
			{
				Check_out(OBB, &GetOut);
				if (GetOut == 1)
				{
					player = O;
				}
				else
				{
					break;
				}
			}
			else
			{
				/*None*/
			}

			/*sent the text*/
			SendMassage(userInput);
			cout << "Turn Of Player " << player << " Waiting Your Turn... ";
		}
	} while (GetOut == 0);

	Disconnect();
}

