#include "IniFile.h"
#include "Player.h"

//const char* File = "HuanRose.ini";

#define FILEPATH ".\\TienBip.ini"

#define SIZEBUF 25


/**********************************************************************************************
* @Func: Function write data into file .ini
*
//**********************************************************************************************/
void IniFile::WriteFileIni(Player* Player1) {

	std::string Section = "player" + std::to_string(Player1->NId());

	WritePrivateProfileStringA(Section.c_str(), " Name ", (Player1->NPlayer()).c_str(), FILEPATH);
	WritePrivateProfileStringA(Section.c_str(), " NumberOfWin ", (std::to_string(Player1->NWin())).c_str(), FILEPATH);
	WritePrivateProfileStringA(Section.c_str(), " NumberOfLose", (std::to_string(Player1->NLose())).c_str(), FILEPATH);
	WritePrivateProfileStringA(Section.c_str(), " NumberOfDraw ", (std::to_string(Player1->NDraw())).c_str(), FILEPATH);
}

/**********************************************************************************************
* @Func: Function Read data from file .ini
*
**********************************************************************************************/
void IniFile::ReadFineInit(Player* Player1) {

	char GetData[SIZEBUF] = " ";
	std::string Section = "player" + std::to_string(Player1->NId());

	GetPrivateProfileStringA(Section.c_str(), "Name ", NULL, GetData, SIZEBUF, FILEPATH);
	std::cout << "Name:" << GetData << std::endl;

	GetPrivateProfileStringA(Section.c_str(), "NumberOfWin ", NULL, GetData, SIZEBUF, FILEPATH);
	std::cout << "NumberOfWin:" << GetData << std::endl;

	GetPrivateProfileStringA(Section.c_str(), "NumberOfLose ", NULL, GetData, SIZEBUF, FILEPATH);
	std::cout << "NumberOfLose:" << GetData << std::endl;

	GetPrivateProfileStringA(Section.c_str(), "NumberOfDraw ", NULL, GetData, SIZEBUF, FILEPATH);
	std::cout << "NumberOfDraw:" << GetData << std::endl;

	/*GetPrivateProfileStringA(Section.c_str(), "Name ", (Player1->NPlayer()).c_str(), GetData, SIZEBUF, FILEPATH);
	std::cout << "Name:" << GetData << std::endl;

	GetPrivateProfileStringA(Section.c_str(), "NumberOfWin ", (std::to_string(Player1->NWin())).c_str(), GetData, SIZEBUF, FILEPATH);
	std::cout << "NumberOfWin:" << GetData << std::endl;

	GetPrivateProfileStringA(Section.c_str(), "NumberOfLose ", (std::to_string(Player1->NLose())).c_str(), GetData, SIZEBUF, FILEPATH);
	std::cout << "NumberOfLose:" << GetData << std::endl;

	GetPrivateProfileStringA(Section.c_str(), "NumberOfDraw ", (std::to_string(Player1->NDraw())).c_str(), GetData, SIZEBUF, FILEPATH);
	std::cout << "NumberOfDraw:" << GetData << std::endl;*/
}



///*update inform*/
//void File::UpdateInform(std::string Name) {
//
//
//}
//
//
///*tra player section nao*/
//void File::FilePlayer(Player* player){
//	
//
//}