#pragma once

#include "Player.h"

/*creatMatch*/
#include <iostream>
#include <fstream>
#include <TCHAR.H>
#include <windows.h>
#include <string>


class IniFile
{
public:

	/*std::string convertToString(char*, int);*/

	void WriteFileIni(Player*);

	void ReadFineInit(Player*);

	//void UpdateInform(std::string);/*update inform*/

	//void FilePlayer(Player*);/*tra player section nao*/
};

