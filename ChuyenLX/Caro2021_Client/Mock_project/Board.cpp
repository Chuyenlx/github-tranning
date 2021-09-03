/***********************************************************************************************************************************/
#include "Board.h"

/**********************************************************************************************
* @Func: Initized Array Data
*
**********************************************************************************************/
void Board::Init()
{
	int IndexR;
	int IndexC;

	this->Raw = RAW;
	this->Col = COL;

	/*std::cout << "Please Enter The Chessboard Size (Maximum 10x10): " << std::endl;
	std::cin >> Raw >> Col;*/

	/*Create Board Caro*/
	for (IndexC = 0; IndexC < this->Col; IndexC++)
	{
		for (IndexR = 0; IndexR < this->Raw; IndexR++)
		{
			Caro[IndexR][IndexC] = NONE;
		}
	}
}

/**********************************************************************************************
* @Func: Draw Board caro
*
**********************************************************************************************/
void Board::DrawBoard()
{
	int Index;
	int IndexC;
	int IndexR;

	system("CLS");/*Clear display*/

	std::cout << "       Player 1<x> - Player 2<o>      " << std::endl;
	std::cout << "  ";

	for (IndexC = 0; IndexC < COL; IndexC++)
	{
		std::cout << "  " << IndexC << " ";
	}
	std::cout << std::endl;
	for (IndexR = 0; IndexR < RAW; IndexR++)
	{
		std::cout << IndexR << " |";
		for (IndexC = 0; IndexC < COL; IndexC++)
		{
			std::cout << " " << Caro[IndexR][IndexC] << " |";
		}

		std::cout << std::endl;

		std::cout << "  -";
		for (Index = 0; Index < COL; Index++)
		{
			std::cout << "----";
		}
		std::cout << std::endl;
	}
}

/**********************************************************************************************
* @Func: Fill Data to chessBoard
*
**********************************************************************************************/
void Board::FillData(int Axisx, int Axisy, char Player) {

	this->Caro[Axisx][Axisy] = Player;
}

/**********************************************************************************************
* @Func: Fill Data to chessBoard
*
**********************************************************************************************/
char Board::ChessBoard(int Axisx, int Axisy) {

	return this->Caro[Axisx][Axisy];
}

/**********************************************************************************************
* @Func: Check conditional Draws
*
**********************************************************************************************/
int Board::CheckEnd() {
	return (Raw * Col);
}

/**********************************************************************************************
* @Func:
*
**********************************************************************************************/
int Board::GotoX() {
	return Raw;
}

/**********************************************************************************************
* @Func:
*
**********************************************************************************************/
int Board::GotoY() {
	return Col;
}