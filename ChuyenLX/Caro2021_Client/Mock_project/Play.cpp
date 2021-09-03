/***********************************************************************************************************************************/
#include "Play.h"


/**********************************************************************************************
* @func: check whose is turn of player?
*
*
***********************************************************************************************/
char Play::checkturn(char check)
{
	if ((check) == X)
	{
		(check) = O;
	}
	else if ((check) == O)
	{
		(check) = X;
	}

	return (check);
}


/**********************************************************************************************
* @Func: Set value for Axis X,Y
*
*
***********************************************************************************************/
void Play::GetAxitXY(int AX, int AY) {
	this->AxitX = AX;
	this->AxitY = AY;
}


/**********************************************************************************************
* @Func: Set Type of player
*
*
***********************************************************************************************/
void Play::GetTypePlayer(char Type) {
	this->TypePlayer = Type;
}

/**********************************************************************************************
* @Func: Get Type Player
*
*
***********************************************************************************************/
char Play::ChooseType() {
	return this->TypePlayer;
}

/**********************************************************************************************
* @Func: Axis Turn of player
*
*
***********************************************************************************************/
int Play::ChooseX() {
	return AxitX;
}

/**********************************************************************************************
* @Func: Axis Turn of player
*
*
***********************************************************************************************/
int Play::ChooseY() {
	return AxitY;
}


/**********************************************************************************************
* @Func: Check Condition Winner
*
*
***********************************************************************************************/
int Play::CheckWinner(Board& Chess, int RawCur, int ColCur)
{
	int Check = -1;
	int IndexC;
	int IndexR;

	/*Swap Raw current*/
	for (IndexC = 0; IndexC < Chess.GotoX(); IndexC++)
	{
		/*Check conditional Raw*/
		if (Chess.ChessBoard(RawCur, IndexC) == X)
		{
			if ((Chess.ChessBoard(RawCur, IndexC + 1) == X) && (Chess.ChessBoard(RawCur, IndexC + 2) == X) && (Chess.ChessBoard(RawCur, IndexC + 3) == X))
			{
				Check = 1;
				break;
			}
			else
			{

			}
		}
		else if (Chess.ChessBoard(RawCur, IndexC) == O)
		{
			if ((Chess.ChessBoard(RawCur, IndexC + 1) == O) && (Chess.ChessBoard(RawCur, IndexC + 2) == O) && (Chess.ChessBoard(RawCur, IndexC + 3) == O))
			{
				Check = 0;
				break;
			}
			else
			{

			}
		}
	}

	/*Swap Colum current*/
	for (IndexR = 0; IndexR < Chess.GotoY(); IndexR++)
	{
		/*Check conditional Colum*/
		if (Chess.ChessBoard(IndexR, ColCur) == X)
		{
			if (Chess.ChessBoard(IndexR + 1, ColCur) == X && Chess.ChessBoard(IndexR + 2, ColCur) == X && Chess.ChessBoard(IndexR + 3, ColCur) == X)
			{
				Check = 1;
			}
			else
			{

			}
		}
		else if (Chess.ChessBoard(IndexR, ColCur) == O)
		{
			if (Chess.ChessBoard(IndexR + 1, ColCur) == O && Chess.ChessBoard(IndexR + 2, ColCur) == O && Chess.ChessBoard(IndexR + 3, ColCur) == O)
			{
				Check = 0;
			}
			else
			{

			}
		}
	}

	/*Check swap cross line left - > right*/
	for (IndexR = 0; IndexR < Chess.GotoX(); IndexR++)
	{
		for (IndexC = 0; IndexC < Chess.GotoY(); IndexC++)
		{
			if (Chess.ChessBoard(IndexR, IndexC) == X)
			{
				if (Chess.ChessBoard(IndexR + 1, IndexC + 1) == X && Chess.ChessBoard(IndexR + 2, IndexC + 2) == X && Chess.ChessBoard(IndexR + 3, IndexC + 3) == X)
				{
					Check = 1;
				}
				else
				{

				}
			}
			else if (Chess.ChessBoard(IndexR, IndexC) == O)
			{
				if ((Chess.ChessBoard(IndexR + 1, IndexC + 1) == O) && (Chess.ChessBoard(IndexR + 2, IndexC + 2) == O) && (Chess.ChessBoard(IndexR + 3, IndexC + 3) == O))
				{
					Check = 0;
				}
				else
				{

				}
			}
		}
	}

	/*Check swap cross line right - > left*/
	for (IndexC = 1; IndexC <= Chess.GotoX(); IndexC++)
	{
		for (IndexR = 1; IndexR <= Chess.GotoY(); IndexR++)
		{
			if ((IndexR <= Chess.GotoY()) && Chess.ChessBoard(IndexR, IndexC) == X)
			{
				if ((IndexR + 1 <= Chess.GotoY()) && (IndexC - 1 <= Chess.GotoY()) && Chess.ChessBoard(IndexR + 1, IndexC - 1) == X)
				{
					if ((IndexR + 2 <= Chess.GotoY()) && (IndexC - 2 <= Chess.GotoY()) && Chess.ChessBoard(IndexR + 2, IndexC - 2) == X)
					{
						if ((IndexR + 3 <= Chess.GotoY()) && (IndexC - 3 <= Chess.GotoY()) && Chess.ChessBoard(IndexR + 3, IndexC - 3) == X)

							Check = 1;
					}

				}
				else
				{

				}
			}
			else if ((IndexR <= Chess.GotoY()) && Chess.ChessBoard(IndexR, IndexC) == O)
			{
				if ((IndexR + 1 <= Chess.GotoY()) && (IndexC - 1 <= Chess.GotoY()) && Chess.ChessBoard(IndexR + 1, IndexC - 1) == O)
				{
					if ((IndexR + 2 <= Chess.GotoY()) && (IndexC - 2 <= Chess.GotoY()) && Chess.ChessBoard(IndexR + 2, IndexC - 2) == O)
					{
						if ((IndexR + 3 <= Chess.GotoY()) && (IndexC - 3 <= Chess.GotoY()) && Chess.ChessBoard(IndexR + 3, IndexC - 3) == O)

							Check = 0;
					}

				}
				else
				{

				}
			}
		}
	}

	/*Conditional balance*/
	return Check;
}

/**********************************************************************************************
* @Func: Check Condition Winner
*
*
***********************************************************************************************/
void Play::Turn(Board& Chess, char player)
{
	Chess.FillData(AxitX, AxitY, player);
}

/**********************************************************************************************
* @Func: Play Game
*
*
***********************************************************************************************/
int Play::PlayGame(Board& BOARD, int a, int b, int* count, char* Player)
{
	int result = -1;

	GetAxitXY(a, b); /*Set Axis*/

	if ((ChooseX() < BOARD.GotoX()) && (ChooseY() < BOARD.GotoY())) /*Check*/
	{
		if (BOARD.ChessBoard(ChooseX(), ChooseY()) != NONE)
		{
			std::cout << "Position valid please enter again" << std::endl;
		}
		else
		{
			GetTypePlayer(*Player);

			Turn(BOARD, *Player);/*danh */

			count++;

			BOARD.DrawBoard();

			if (CheckWinner(BOARD, ChooseX(), ChooseY()) == 1)
			{
				std::cout << "congratulations!" << std::endl
					<< " Play " << *Player << " win" << std::endl;
				result = 1;
			}
			else if (CheckWinner(BOARD, ChooseX(), ChooseY()) == 0)
			{
				std::cout << "congratulations!" << std::endl
					<< " Play " << *Player << " win" << std::endl;
				result = 1;
			}
			/*Check Conditional Balance*/
			else if (*count == BOARD.CheckEnd())
			{
				std::cout << " The Draw Match! " << std::endl;
				result = 1;
			}
			else
			{
				result = -1;
			}
		}

		*Player = checkturn(*Player);
	}
	else
	{
		std::cout << "Number unvalid Please enter again" << std::endl;
	}

	return result;
}