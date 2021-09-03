#pragma once
#include <iostream>
#include <fstream>
#include <TCHAR.H>
#include <windows.h>
#include <string>


class Player
{
private:
	int Id;
	std::string NamePlayer;
	int NumberWin;
	int NumberLose;
	int NumberDraw;
	bool Newbie;
public:

	double WinRate();

	void GetInform();

	void ResultMatch(int, std::string, int, int, int);

	std::string NPlayer();

	int NId();

	int NWin();

	int NLose();

	int NDraw();

};