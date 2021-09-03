/***********************************************************************************************************************************/
#pragma once

#include "Board.h"

#define X 'X'              /*Statement X*/
#define O 'O'              /*Statement O*/

class Play
{
private:
	int AxitX = 0;
	int AxitY = 0;
	char TypePlayer = ' ';
public:

	void GetAxitXY(int AX, int AY);
	void GetTypePlayer(char Type);

	int ChooseX();
	int ChooseY();
	char ChooseType();

	void Turn(Board& Chess, char player);

	char checkturn(char check);

	int CheckWinner(Board& Chess, int RawCur, int ColCur);

	int PlayGame(Board& BOARD, int a, int b, int* count, char* Player);

};
