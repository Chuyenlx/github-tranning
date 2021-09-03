/***********************************************************************************************************************************/
#pragma once

#include <iostream>

#define COL 10
#define RAW 10

#define NONE ' '           /*Statement NONE*/

class Board
{
private:
	int Raw;               /*numbers raw*/
	int Col;               /*numbers colum*/
	char Caro[RAW][COL];   /*ChessBoard*/
public:

	void Init();

	void DrawBoard();

	void FillData(int, int, char);

	char ChessBoard(int, int);

	int GotoX();

	int GotoY();

	int CheckEnd();

};