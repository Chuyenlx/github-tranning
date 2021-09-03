//#include "TestFileINI.h"
////#include <iostream>
////#include <cstring>
////#include <fstream>
////#include <window.h>
////
////using namespace std;
//
////class People {
////public:
////	char FullName[256];
////	char Adress[256];
////	char TeleNumber[256];
////};
////
////
////class Employees: public People {
////public:
////	char position[256];
////	friend istream& operator >> (istream& Id, Employees& NV)/* Overloading operator*/
////	{
////		cout << "Enter Name :" << endl;
////		cin.getline(NV.FullName, 256);
////		cout << "Enter Address :" << endl;
////		cin.getline(NV.Adress, 256);
////		cout << "Enter Telephone :" << endl;
////		cin.getline(NV.TeleNumber, 256);
////		cout << "Enter Position :" << endl;
////		cin.getline(NV.position, 256);
////
////		return Id;
////
////	}
////
////};
////
////int main()
////{
////	//Employees Emp;
////	//cin >> Emp;
////	///*Write to file*/
////	////fstream f("TienBip.ini", ios::hex| ios::out | ios::app);
////	//fstream f("TienBip.ini", ios::binary| ios::out | ios::app);
////	//if (!f) cout << "error";
////	//f.write(reinterpret_cast<char*>(&Emp), sizeof(Emp));
////	//f.close();
////	/*Read to file*/
////
////
////	Employees Emp1;
////	fstream g("TienBip.ini", ios::binary | ios::in);
////	if (!g) cout << "error g";
////	while (g.good())
////	{
////		g.read(reinterpret_cast<char*>(&Emp1), sizeof(Emp1));
////		if (g.eof()) break;
////
////	    cout << Emp1.FullName << endl 
////			 << Emp1.Adress << endl
////			 << Emp1.TeleNumber << endl
////			 << Emp1.position << endl;
////	}
////	g.close();
////
////	return 0;
////}
//
//
////#include <tchar.h>
////#include <stdio.h>
////#include <windows.h>
////#include <conio.h>
////void main()
////{
////    //Đọc ghi file ini trong cùng thư mục với ứng dụng
////    const char* iniFile = "App.ini";
////
////    //Bước 1 : Lấy thư mục hiện hành chứa file exe của ứng dụng và xác định tên tập tin ini
////    LPSTR Path = NULL;
////    Path = (LPSTR)malloc(255);
////    GetCurrentDirectory(255, Path);
////
////    strcat(Path, "\\");
////    strcat(Path, iniFile);
////    printf("Init Path = %s\n", Path);
////
////    //Bước 2: Ghi thông tin vào file ini
////    WritePrivateProfileString("Section", "Key", "1", Path);
////
////    //Bước 3: Đọc thông tin từ file ini đã ghi
////    LPSTR rtValue = (LPSTR)malloc(100);
////    int word;
////    GetPrivateProfileString("Section", "Key", "Value", rtValue, 100, Path);
////    printf("Read value : %s\n", rtValue);
////
////    //Giải phóng bộ nhớ
////    free(rtValue);
////    free(Path);
////    getch();
////}
//
//
////#define WIDTH 7
////
////void _tmain()
////{
////	MEMORYSTATUSEX statex;
////
////	statex.dwLength = sizeof(statex);
////
////	GlobalMemoryStatusEx(&statex);
////
////
////	_tprintf(TEXT("There is  %*ld percent of memory in use.\n"), WIDTH, statex.dwMemoryLoad);
////	_tprintf(TEXT("There are %*I64d total Mbytes of physical memory.\n"), WIDTH, statex.ullTotalPhys / DIV);
////	_tprintf(TEXT("There are %*I64d free Mbytes of physical memory.\n"), WIDTH, statex.ullAvailPhys / DIV);
////	_tprintf(TEXT("There are %*I64d total Mbytes of paging file.\n"), WIDTH, statex.ullTotalPageFile / DIV);
////	_tprintf(TEXT("There are %*I64d free Mbytes of paging file.\n"), WIDTH, statex.ullAvailPageFile / DIV);
////	_tprintf(TEXT("There are %*I64d total Mbytes of virtual memory.\n"), WIDTH, statex.ullTotalVirtual / DIV);
////	_tprintf(TEXT("There are %*I64d free Mbytes of virtual memory.\n"), WIDTH, statex.ullAvailVirtual / DIV);
////	_tprintf(TEXT("There are %*I64d free Mbytes of extended memory.\n"), WIDTH, statex.ullAvailExtendedVirtual / DIV);
////}
//
//
//#include <iostream>
//#include <fstream>
//#include <TCHAR.H>
//#include <windows.h>
//#include <string>
////#include <WinBase.H>
//
//using namespace std;
//
//
//
//#define FILEPATH ".\\TienBip.ini"
//
//const char* File = "HuanRose.ini";
//
////FILE* file;
//
////file = fopen(FILEPATH, "r");
//
////ifstream input("HuanRose.ini");
//
////wstring ConvertStringToWstring(const string& str)
////{
////	if (str.empty())
////	{
////		return wstring();
////	}
////
////	int num_chars = MultiByteToWideChar(CP_ACP, MB_ERR_INVALID_CHARS, str.c_str(), str.length(), NULL, 0);
////	wstring wstrTo;
////
////	if (num_chars)
////	{
////		wstrTo.resize(num_chars);
////		if (MultiByteToWideChar(CP_ACP, MB_ERR_INVALID_CHARS, str.c_str(), str.length(), &wstrTo[0], num_chars))
////		{
////			return wstrTo;
////		}
////	}
////	return wstring();
////}
//
//
//enum ID_PLAYER {
//	ONE = 1, TWO = 2, THREE = 3, FOUR = 4
//};
//
//class PLAYER {
//private:
//	int Id;
//	std::string NamePlayer;
//	int NumberWin;
//	int NumberLose;
//	int NumberDraw;
//public:
//	PLAYER* Player;
//
//	PLAYER(int id, std::string namep_layer, int number_win, int number_lose, int number_draw) {
//		this->Id = id;
//		this->NamePlayer = namep_layer;
//		this->NumberWin = number_win;
//		this->NumberLose = number_lose;
//		this->NumberDraw = number_draw;
//	}
//
//	double WinRate();
//
//	void SetInform();
//
//	void GetInform();
//
//	void WriteFileIni(PLAYER* Player);
//
//	void ReadFineInit(PLAYER* Player);
//
//	/*~PLAYER(){
//
//	}*/
//};
//
////void PLAYER::SetInform()
////{
////	std::cout << "Number of Player: " << endl;
////	std::cin >> Id;
////	std::cout << "Name of Player: " << endl;
////	std::cin >> NamePlayer;
////	std::cout << "Number of Win Match" << endl;
////	std::cin >> NumberWin;
////	std::cout << "Number of Lose Match" << endl;
////	std::cin >> NumberLose;
////	std::cout << "Number of Draw Match" << endl;
////	std::cin >> NumberDraw;
////}
//
//double PLAYER::WinRate() {
//	int Sum = (NumberWin + NumberLose + NumberDraw);
//	double WinRate = (double)NumberWin / (double)Sum;
//	return WinRate * 100.0;
//}
//
//void PLAYER::GetInform() {
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
//
////class IniFile: public PLAYER {
////public:
////	PLAYER* Player;
////
////	void WriteFileIni(PLAYER *);
////
////	void ReadFineInit(PLAYER *);
////};
////
////void IniFile::WriteFileIni(PLAYER* Player1) {
////
////	this->Player = Player1;
////
////	string Section = "player" + std::to_string(this->Player->Id);
////
////	WritePrivateProfileStringA(Section.c_str(), " Name ", (this->Player->NamePlayer).c_str(), FILEPATH);
////	WritePrivateProfileStringA(Section.c_str(), " NumberOfWin ", (std::to_string(this->Player->NumberWin)).c_str(), FILEPATH);
////	WritePrivateProfileStringA(Section.c_str(), " NumberOfLose", (std::to_string(Player->NumberLose)).c_str(), FILEPATH);
////	WritePrivateProfileStringA(Section.c_str(), " NumberOfDraw ", (std::to_string(Player->NumberDraw)).c_str(), FILEPATH);
////
////}
//
////void IniFile::ReadFineInit(PLAYER* Player) {
////
////	char GetData[25] = " ";
////	std::string Section = "player" + std::to_string(Player->Id);
////
////	GetPrivateProfileStringA(Section.c_str(), "Name ", (Player->NamePlayer).c_str(), GetData, 25, FILEPATH);
////	std::cout << "Name:" << GetData << endl;
////	GetPrivateProfileStringA(Section.c_str(), "NumberOfWin ", (std::to_string(Player->NumberWin)).c_str(), GetData, 25, FILEPATH);
////	std::cout << "NumberOfWin:" << GetData << endl;
////	GetPrivateProfileStringA(Section.c_str(), "NumberOfLose ", (std::to_string(Player->NumberLose)).c_str(), GetData, 25, FILEPATH);
////	std::cout << "NumberOfLose:" << GetData << endl;
////	GetPrivateProfileStringA(Section.c_str(), "NumberOfDraw ", (std::to_string(Player->NumberDraw)).c_str(), GetData, 25, FILEPATH);
////	std::cout << "NumberOfDraw:" << GetData << endl;
////}
//
////C1
////void PLAYER::WriteFileIni(PLAYER* Player) {
////
////	LPCWSTR LpSection;
////	LPCWSTR LpNamePlayer;
////	LPCWSTR LpNumberWin;
////	LPCWSTR LpNumberLose;
////	LPCWSTR LpNumberDraw;
////
////	string Section = "player" + std::to_string(Player->Id);
////	string NamePlayer = (Player->NamePlayer);
////	string NumberWin = std::to_string(Player->NumberWin);
////	string NumberLose = std::to_string(Player->NumberLose);
////	string NumberDraw = std::to_string(Player->NumberDraw);
////
////
////	wstring Sections(Section.begin(), Section.end());
////	wstring NumberWins(NumberWin.begin(), NumberWin.end());
////	wstring NamePlayers(NamePlayer.begin(), NamePlayer.end());
////	wstring NumberLoses(NumberLose.begin(), NumberLose.end());
////	wstring NumberDraws(NumberDraw.begin(), NumberDraw.end());
////
////	LpSection = Sections.c_str();
////	LpNamePlayer = NamePlayers.c_str();
////	LpNumberWin = NumberWins.c_str();
////	LpNumberLose = NumberLoses.c_str();
////	LpNumberDraw = NumberDraws.c_str();
////
////
////	WritePrivateProfileString(LpSection, TEXT(" Name "), LpNamePlayer, TEXT(FILEPATH));
////	WritePrivateProfileString(LpSection, TEXT(" NumberOfWin "), LpNumberWin, TEXT(FILEPATH));
////	WritePrivateProfileString(LpSection, TEXT(" NumberOfLose"), LpNumberLose, TEXT(FILEPATH));
////	WritePrivateProfileString(LpSection, TEXT(" NumberOfDraw "), LpNumberDraw, TEXT(FILEPATH));
////}
//
//string convertToString(char* str, int size)
//{
//	int Index;
//	string Result = "";
//
//	for (Index = 0; Index < size; Index++) {
//		Result = Result + str[Index];
//	}
//	return Result;
//}
//
//void PLAYER::WriteFileIni(PLAYER* Player) {
//
//	string Section = "player" + std::to_string(Player->Id);
//
//	WritePrivateProfileStringA(Section.c_str(), " Name ", (Player->NamePlayer).c_str(), FILEPATH);
//	WritePrivateProfileStringA(Section.c_str(), " NumberOfWin ", (std::to_string(Player->NumberWin)).c_str(), FILEPATH);
//	WritePrivateProfileStringA(Section.c_str(), " NumberOfLose", (std::to_string(Player->NumberLose)).c_str(), FILEPATH);
//	WritePrivateProfileStringA(Section.c_str(), " NumberOfDraw ", (std::to_string(Player->NumberDraw)).c_str(), FILEPATH);
//
//}
//
//void PLAYER::ReadFineInit(PLAYER* Player) {
//
//	char GetData[25] = " ";
//	std::string Section = "player" + std::to_string(Player->Id);
//
//	GetPrivateProfileStringA(Section.c_str(), "Name ", (Player->NamePlayer).c_str(), GetData, 25, FILEPATH);
//	std::cout << "Name:" << GetData << endl;
//	GetPrivateProfileStringA(Section.c_str(), "NumberOfWin ", (std::to_string(Player->NumberWin)).c_str(), GetData, 25, FILEPATH);
//	std::cout << "NumberOfWin:" << GetData << endl;
//	GetPrivateProfileStringA(Section.c_str(), "NumberOfLose ", (std::to_string(Player->NumberLose)).c_str(), GetData, 25, FILEPATH);
//	std::cout << "NumberOfLose:" << GetData << endl;
//	GetPrivateProfileStringA(Section.c_str(), "NumberOfDraw ", (std::to_string(Player->NumberDraw)).c_str(), GetData, 25, FILEPATH);
//	std::cout << "NumberOfDraw:" << GetData << endl;
//}
//
//
////void WriteFileIni(string player, string name, int Num)
////{
////
////	LPCWSTR LpPlayer;
////	LPCWSTR LpNamePlayer;
////	LPCWSTR LpNum;
////	string Number = to_string(Num);
////
////	wstring Numbers(Number.begin(), Number.end());
////
////	wstring NamePlayer(name.begin(), name.end());
////
////	wstring Player(player.begin(), player.end());
////
////	LpNum = Numbers.c_str();
////
////	LpNamePlayer = NamePlayer.c_str();
////
////	LpPlayer = Player.c_str();
////
////	WritePrivateProfileString(LpPlayer, TEXT(" Name"), LpNamePlayer, TEXT(FILEPATH));
////
////	WritePrivateProfileString(LpPlayer, TEXT(" Number "), LpNum, TEXT(FILEPATH));
////
////}
//
//
////void GetFileIni(string player, string name, int Num)
////{
////	TCHAR dbserver[1000];
////
////	GetPrivateProfileString(LpPlayer, TEXT("Name"), LpNamePlayer, dbserver, sizeof(dbserver) / sizeof(dbserver[0]), TEXT(".\\TienBip.ini"));
////
////	wcout << dbserver << endl;
////
////	GetPrivateProfileString(LpPlayer, TEXT("Number"), LpNum, dbserver, sizeof(dbserver) / sizeof(dbserver[0]), TEXT(".\\TienBip.ini"));
////
////	wcout << dbserver << endl;
////}
//
//
///*@Func: Interface of Player Registor*/
//int main()
//{
//	char choose;
//	int id = 0;
//	std::string Name;
//
//	int Num1 = 0;
//	int Num2 = 0;
//	int Num3 = 0;
//
//
//	do {
//		system("CLS");
//		/*std::cout << "-----------Register Information Of Player-----------" << endl;
//		std::cout << "Number of Player: " << endl;
//		std::cin >> id;
//		std::cout << "Name of Player: " << endl;
//		std::cin >> Name;
//		std::cout << "Number of Win Match" << endl;
//		std::cin >> Num1;
//		std::cout << "Number of Lose Match" << endl;
//		std::cin >> Num2;
//		std::cout << "Number of Draw Match" << endl;
//		std::cin >> Num3;
//
//		PLAYER Player(id, Name, Num1, Num2, Num3);*/
//
//		PLAYER Player;
//
//		Player.SetInform();
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
//
//
//
//	//WriteFileIni("Player1", "ChuyenLX", 5);
//	//PLAYER A(1, "chuyen", 4, 5, 9);
//	/*C1*/
//	//string Name = "USING";
//
//	//wstring To(Name.begin(), Name.end());
//
//	//LPCWSTR LpNamePlayer = To.c_str();
//
//	//WritePrivateProfileString(LpNamePlayer, TEXT(" chuyen "), TEXT(" 143 "), TEXT(FILEPATH));	
//
//	/* C2*/
//	//string Name = "USING";
//	//wstring my_str = L"Hello World";
//	//
//	//LPCWSTR LpNamePlayer; 
//
//	//wstring my_str1 = ConvertStringToWstring(Name);
//
//	//LPCWSTR LpNamePlayer1 = my_str1.c_str();
//
//	//LpNamePlayer = my_str.c_str();
//
//	////string s = to_string(42);
//	//
//	//wcout << "my_str is : " <<LpNamePlayer1<< endl;
//
//	//wcout << "my_str is : " <<my_str<< endl;
//
//	//wcout << "Wide String is : " <<LpNamePlayer<< endl;
//
//	//WritePrivateProfileString(LpNamePlayer, LpNamePlayer1, TEXT(" 143 "), TEXT(FILEPATH));
//
//
//	/*InformSV* B = new InformSV();
//	B->nhap();
//	B->getinfor();
//
//	delete(B);*/
//
//
//	//TCHAR dbserver[1000];
//	//int dbport;
//	//char d[100]= "chuyen";
//
//	//LPCWSTR lpcwName = std::wstring(strname.begin(), strname.end()).c_str();
//
//	///*Write Inform Player into File .INI*/
//	///*WritePrivateProfileString(TEXT("Player1"), TEXT("Name"), TEXT("ChuyenLX"), TEXT(".\\TienBip.ini"));
//	//WritePrivateProfileString(TEXT("Player1"), TEXT("WinRate"), TEXT("Thang"), TEXT(".\\TienBip.ini"));*/
//
//	//WritePrivateProfileSection(TEXT("owner"), TEXT("; last modified 24 April 2021 by HuanROSE and TienBip"), TEXT(FILEPATH));
//	//WritePrivateProfileString(TEXT("owner"), TEXT("name "), TEXT(d), TEXT(FILEPATH));
//	//WritePrivateProfileString(TEXT("owner"), TEXT("organization "), TEXT(" FPT software "), TEXT(FILEPATH));
//
//	//WritePrivateProfileSection(TEXT("Database"), TEXT("; use IP address in case network name resolution is not working"), TEXT(FILEPATH));
//	//WritePrivateProfileString(TEXT("Database"), TEXT("server "), TEXT(" 192.0.2.62 "), TEXT(FILEPATH));
//	//WritePrivateProfileString(TEXT("Database"), TEXT("port "), TEXT(" 143 "), TEXT(FILEPATH));
//	//WritePrivateProfileString(TEXT("Database"), TEXT("file "), TEXT(" payroll.dat "), TEXT(FILEPATH));
//
//	///*Get Inform Player From File .INI*/
//	///*GetPrivateProfileString(TEXT("Player1"), TEXT("Name"), TEXT("127.0.0.1"), dbserver, sizeof(dbserver) / sizeof(dbserver[0]), TEXT(".\\TienBip.ini"));
//	//_tprintf(TEXT(" %s"), dbserver);
//	//GetPrivateProfileString(TEXT("Player1"), TEXT("WinRate"), TEXT("127.0.0.1"), dbserver, sizeof(dbserver) / sizeof(dbserver[0]), TEXT(".\\TienBip.ini"));
//	//_tprintf(TEXT(" %s"), dbserver);*/
//
//	//GetPrivateProfileString(TEXT("Database"), TEXT("server "), TEXT(" 127.0.0.1 "), dbserver, sizeof(dbserver) / sizeof(dbserver[0]), TEXT(".\\TienBip.ini"));
//
//	//dbport = GetPrivateProfileInt(TEXT("Database"), TEXT("127.1.0.1"), 143, TEXT(".\\dbsettings.ini"));
//
//	/*WritePrivateProfileString(TEXT("Player1"), TEXT("Number"), TEXT("10"), TEXT(".\\TienBip.ini"));
//
//	WritePrivateProfileString(TEXT("Database"), TEXT("Number"), TEXT("10"), TEXT(".\\TienBip.ini"));*/
//
//	//cout << dbport << endl<< dbserver <<endl;
//
//
//	/*DeleteFile(
//		LPCTSTR lpFileName
//	)
//	N.B. WritePrivateProfileInt() does not exist*/
//
//	return 0;
//}
