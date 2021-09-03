//#include "Player.h"
//
///**********************************************************************************************
//* @Func: Contructor PLAYER
//*
//**********************************************************************************************/
//Player::Player(int id, std::string namep_layer, int number_win, int number_lose, int number_draw) {
//	this->Id = id;
//	this->NamePlayer = namep_layer;
//	this->NumberWin = number_win;
//	this->NumberLose = number_lose;
//	this->NumberDraw = number_draw;
//}
//
///**********************************************************************************************
//* @Func: Function Calculator Win Rate
//*
//**********************************************************************************************/
//double Player::WinRate() {
//	int Sum = (NumberWin + NumberLose + NumberDraw);
//	double WinRate = (double)NumberWin / (double)Sum;
//	return WinRate * 100.0;
//}
//
///**********************************************************************************************
//* @Func: Function Get Information of Player
//*
//**********************************************************************************************/
//void Player::GetInform() {
//
//	std::cout << "-------------------------------" << std::endl;
//	std::cout << "         Player " << Id << std::endl;
//	std::cout << "Name of Player: " << NamePlayer << std::endl;
//	std::cout << "Number of Win:  " << NumberWin << std::endl;
//	std::cout << "Number of Lose: " << NumberLose << std::endl;
//	std::cout << "Number of Draw: " << NumberDraw << std::endl;
//	std::cout << "Win Rate      : " << WinRate() << " % " << std::endl;
//	std::cout << "-------------------------------" << std::endl;
//}
//
///**********************************************************************************************
//* @Func: Function Convert char to string
//*
//**********************************************************************************************/
//std::string convertToString(char* str, int size)
//{
//	int Index;
//	std::string Result = "";
//
//	for (Index = 0; Index < size; Index++) {
//		Result = Result + str[Index];
//	}
//	return Result;
//}
//
///**********************************************************************************************
//* @Func: Function write data into file .ini
//*
//**********************************************************************************************/
//void Player::WriteFileIni(Player* Player) {
//
//	std::string Section = "player" + std::to_string(Player->Id);
//
//	WritePrivateProfileStringA(Section.c_str(), " Name ", (Player->NamePlayer).c_str(), FILEPATH);
//	WritePrivateProfileStringA(Section.c_str(), " NumberOfWin ", (std::to_string(Player->NumberWin)).c_str(), FILEPATH);
//	WritePrivateProfileStringA(Section.c_str(), " NumberOfLose", (std::to_string(Player->NumberLose)).c_str(), FILEPATH);
//	WritePrivateProfileStringA(Section.c_str(), " NumberOfDraw ", (std::to_string(Player->NumberDraw)).c_str(), FILEPATH);
//
//}
//
///**********************************************************************************************
//* @Func: Function Read data from file .ini
//*
//**********************************************************************************************/
//void Player::ReadFineInit(Player* Player) {
//
//	char GetData[25] = " ";
//	std::string Section = "player" + std::to_string(Player->Id);
//
//	GetPrivateProfileStringA(Section.c_str(), "Name ", (Player->NamePlayer).c_str(), GetData, 25, FILEPATH);
//	std::cout << "Name:" << GetData << std::endl;
//	GetPrivateProfileStringA(Section.c_str(), "NumberOfWin ", (std::to_string(Player->NumberWin)).c_str(), GetData, 25, FILEPATH);
//	std::cout << "NumberOfWin:" << GetData << std::endl;
//	GetPrivateProfileStringA(Section.c_str(), "NumberOfLose ", (std::to_string(Player->NumberLose)).c_str(), GetData, 25, FILEPATH);
//	std::cout << "NumberOfLose:" << GetData << std::endl;
//	GetPrivateProfileStringA(Section.c_str(), "NumberOfDraw ", (std::to_string(Player->NumberDraw)).c_str(), GetData, 25, FILEPATH);
//	std::cout << "NumberOfDraw:" << GetData << std::endl;
//}
//
//
///**********************************************************************************************
//* @Func: Function Read data from file .ini
//*
//**********************************************************************************************/
//void ViewPlayer()
//{
//	char choose;
//	int id = 0;
//	std::string Name;
//	int Num1 = 0;
//	int Num2 = 0;
//	int Num3 = 0;
//
//	do {
//		system("CLS");
//		std::cout << "-----------Register Information Of Player-----------" << std::endl;
//		std::cout << "Number of Player: " << std::endl;
//		std::cin >> id;
//		std::cout << "Name of Player: " << std::endl;
//		std::cin >> Name;
//		std::cout << "Number of Win Match" << std::endl;
//		std::cin >> Num1;
//		std::cout << "Number of Lose Match" << std::endl;
//		std::cin >> Num2;
//		std::cout << "Number of Draw Match" << std::endl;
//		std::cin >> Num3;
//
//		Player Player(id, Name, Num1, Num2, Num3);
//
//		Player.GetInform();
//
//		std::cout << "If confirm save please choose ('y'): " << std::endl;
//
//		std::cin >> choose;
//
//		if (choose == 'y')
//		{
//			Player.WriteFileIni(&Player);
//
//			system("CLS");
//
//			std::cout << "YOUR INFORM SAVED!" << std::endl << std::endl;
//
//			Player.ReadFineInit(&Player);
//
//			system("pause");
//		}
//		else
//		{
//			system("CLS");
//
//			std::cout << "WAINNING: YOUR INFORM SAVE FAIL (-_-)" << std::endl;
//
//			system("pause");
//		}
//	} while (1);
//}




#include "Player.h"

/**********************************************************************************************
* @Func: 
*
**********************************************************************************************/
void Player::ResultMatch(int id, std::string namep_layer, int number_win, int number_lose, int number_draw) {
	this->Id = id;
	this->NamePlayer = namep_layer;
	this->NumberWin = number_win;
	this->NumberLose = number_lose;
	this->NumberDraw = number_draw;
}

/**********************************************************************************************
* @Func: Function Calculator Win Rate
*
**********************************************************************************************/
double Player::WinRate() {
	int Sum = (NumberWin + NumberLose + NumberDraw);
	double WinRate = (double)NumberWin / (double)Sum;
	return WinRate * 100.0;
}

/**********************************************************************************************
* @Func: Function Get Information of Player
*
**********************************************************************************************/
void Player::GetInform() {

	std::cout << "-------------------------------" << std::endl;
	std::cout << "         Player " << Id << std::endl;
	std::cout << "Name of Player: " << NamePlayer << std::endl;
	std::cout << "Number of Win:  " << NumberWin << std::endl;
	std::cout << "Number of Lose: " << NumberLose << std::endl;
	std::cout << "Number of Draw: " << NumberDraw << std::endl;
	std::cout << "Win Rate      : " << WinRate() << " % " << std::endl;
	std::cout << "-------------------------------" << std::endl;
}

/**********************************************************************************************
* @Func: 
*
**********************************************************************************************/
std::string Player::NPlayer()
{
	return NamePlayer;
}

/**********************************************************************************************
* @Func:
*
**********************************************************************************************/
int Player::NId() {
	return Id;
}

/**********************************************************************************************
* @Func:
*
**********************************************************************************************/
int Player::NWin() {
	return NumberWin;
}

/**********************************************************************************************
* @Func:
*
**********************************************************************************************/
int Player::NLose() {
	return NumberLose;
}

/**********************************************************************************************
* @Func:
*
**********************************************************************************************/
int Player::NDraw() {
	return NumberDraw;
}

