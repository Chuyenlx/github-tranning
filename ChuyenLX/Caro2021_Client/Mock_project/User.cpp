#include <iostream>
#include <string>
#include <WS2tcpip.h>
#include "Board.h"
#include "Play.h"
#include "Connect.h"
//#include "IniFile.h"
//#include "Player.h"

#define T TRUE
#define F FALSE

#pragma comment(lib, "WS2_32.lib")

using namespace std;

/**********************************************************************************************
* @Func: Function Main Menu
*
*
**********************************************************************************************/
//void Menu()
//{
//	int choose = 0;
//
//	std::cout << " ============================================================================= " << std::endl;
//	std::cout << " ||   ++                            ++             *   *  *  *  *           || " << std::endl;
//	std::cout << " ||     ++                        ++           *                   *        || " << std::endl;
//	std::cout << " ||       ++                    ++          *                         *     || " << std::endl;
//	std::cout << " ||         ++                ++          *               LXC           *   || " << std::endl;
//	std::cout << " ||           ++            ++           * *                             *  || " << std::endl;
//	std::cout << " ||             ++        ++                 *                            * || " << std::endl;
//	std::cout << " ||               ++    ++                      *                         * || " << std::endl;
//	std::cout << " ||                 ++++                           *                      * || " << std::endl;
//	std::cout << " ||               ++    ++               * * * * * * * *                  * || " << std::endl;
//	std::cout << " ||             ++        ++             *                               *  || " << std::endl;
//	std::cout << " ||           ++            ++            *                             *   || " << std::endl;
//	std::cout << " ||         ++                ++           *                           *    || " << std::endl;
//	std::cout << " ||       ++                    ++           *                       *      || " << std::endl;
//	std::cout << " ||     ++                        ++            *                 *         || " << std::endl;
//	std::cout << " ||   ++                            ++             *  *  *  *  *            || " << std::endl;
//	std::cout << " ***************************************************************************** " << std::endl;
//	std::cout << " *                        WELCOME TO MY GAME CARO                            * " << std::endl;
//	std::cout << " *                                                                           * " << std::endl;
//	std::cout << " *                           1. Play Game                                    * " << std::endl;
//	std::cout << " *                                                                           * " << std::endl;
//	std::cout << " *                           2. Play Offline                                 * " << std::endl;
//	std::cout << " *                                                                           * " << std::endl;
//	std::cout << " *                           3. Replay match                                 * " << std::endl;
//	std::cout << " *                                                                           * " << std::endl;
//	std::cout << " *                           4. Tutorial                                     * " << std::endl;
//	std::cout << " *                                                                           * " << std::endl;
//	std::cout << " ***************************************************************************** " << std::endl;
//	std::cout << " Enter the your choose:                                                        " << std::endl;
//	std::cin >> choose;
//	while (choose > 0 && choose <= 4)
//	{
//		switch (choose)
//		{
//		case 1:
//			system("CLS");
//
//			std::cout << " ***************************************************************************** " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                        WELCOME TO MY GAME CARO                            * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                    ---->  1. Play Game                                    * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           2. Play Offline                                 * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           3. Replay match                                 * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           4. Tutorial                                     * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " ***************************************************************************** " << std::endl;
//			/*std::cout << "       ----> 1.Play game            " << std::endl;*/
//
//			break;
//		case 2:
//			system("CLS");
//			std::cout << " ***************************************************************************** " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                        WELCOME TO MY GAME CARO                            * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           1. Play Game                                    * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                    ---->  2. Play Offline                                 * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           3. Replay match                                 * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           4. Tutorial                                     * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " ***************************************************************************** " << std::endl;
//			//std::cout << "       ----> 2.Play Offline               " << std::endl;
//
//			break;
//		case 3:
//			system("CLS");
//			std::cout << " ***************************************************************************** " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                        WELCOME TO MY GAME CARO                            * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           1. Play Game                                    * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           2. Play Offline                                 * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                   ---->   3. Replay match                                 * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           4. Tutorial                                     * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " ***************************************************************************** " << std::endl;
//			//std::cout << "       ----> 3.Replay match                " << std::endl;
//
//			break;
//		case 4:
//			system("CLS");
//			std::cout << " ***************************************************************************** " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                        WELCOME TO MY GAME CARO                            * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           1. Play Game                                    * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           2. Play Offline                                 * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                           3. Replay match                                 * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " *                   ---->   4. Tutorial                                     * " << std::endl;
//			std::cout << " *                                                                           * " << std::endl;
//			std::cout << " ***************************************************************************** " << std::endl;
//			//std::cout << "       ----> 4.Register             " << std::endl;
//
//			break;
//		default:
//			break;
//		}
//	}
//}


/**********************************************************************************************
* @Func: Function Test Play Game
*
* 
**********************************************************************************************/
//void PlayGame()
//{
//	Board OBB;
//	Play OAA;
//
//	int Count = 0;
//	int AxisX;
//	int AxisY;
//	char player = X;
//
//	OBB.Init();
//
//	OBB.DrawBoard();
//
//	do {
//		std::cout << " ->  " << player << " Turn Round: " << std::endl;
//		std::cout << std::endl;
//		std::cin >> AxisX >> AxisY;
//
//		if ((OAA.ChooseX() < OBB.GotoX()) && (OAA.ChooseY() < OBB.GotoY()))
//		{
//			if (OBB.ChessBoard(AxisX, AxisY) != NONE)
//			{
//				std::cout << "Position valid please enter again" << std::endl;
//			}
//			else
//			{
//				OAA.Set(AxisX, AxisY, player);
//
//				OAA.Turn(OBB, player);/*danh */
//
//				Count++;
//
//				OBB.DrawBoard();
//
//				if (OAA.CheckWinner(OBB, OAA.ChooseX(), OAA.ChooseY()) == 1)
//				{
//					std::cout << "congratulations!" << std::endl
//						<< " Play " << X << " win" << std::endl;
//					break;
//				}
//				else if (OAA.CheckWinner(OBB, OAA.ChooseX(), OAA.ChooseY()) == 0)
//				{
//					std::cout << "congratulations!" << std::endl
//						<< " Play " << O << " win" << std::endl;
//					break;
//				}
//				/*Check Conditional Balance*/
//				else if (Count == OBB.CheckEnd())
//				{
//					std::cout << " The Draw Match! " << std::endl;
//					break;
//				}
//				else
//				{
//
//				}
//			}
//			OAA.checkturn(&player);
//		}
//		else
//		{
//			std::cout << "Number unvalid Please enter again" << std::endl;
//		}
//
//	} while (1);
//}




/**********************************************************************************************
* @Func: Function Test File pLay
*
**********************************************************************************************/
//int FilePlay()
//{
//	int id = 1;
//	char GetData[7] = " ";
//	std::string a = "Chuyen";
//	std::string CH = "";
//	int Check = 0;
//
//	std::string Section = "player" + std::to_string(id);
//
//	GetPrivateProfileStringA(Section.c_str(), "Name ", NULL, GetData, 7, ".\\TienBip.ini");
//
//	CH = convertToString(GetData, sizeof(GetData));
//
//	if (a == CH)
//	{
//		Check = 1;
//	}
//	else
//	{
//		Check = 0;
//	}
//
//	return Check;
//}

/**********************************************************************************************
* @Func: Function Test Read data from file .ini
*
**********************************************************************************************/
//int SetIniFile()
//{
//	char choose;
//	int id = 0;
//	std::string Name;
//
//	int Num1 = 0;
//	int Num2 = 0;
//	int Num3 = 0;
//
//	IniFile OCC;
//	Player Player1;
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
//		Player1.ResultMatch(id, Name, Num1, Num2, Num3);
//
//		Player1.GetInform();
//
//		std::cout << "If confirm save please choose ('y'): " << std::endl;
//
//		std::cin >> choose;
//
//		if (choose == 'y')
//		{
//			OCC.WriteFileIni(&Player1);
//
//			system("CLS");
//
//			std::cout << "YOUR INFORM SAVED!" << std::endl << std::endl;
//
//			OCC.ReadFineInit(&Player1);
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
//	return 0;
//}


/**********************************************************************************************
* @Func: Function Main USER
* @BY: LA XUAN CHUYEN (ChuyenLX)
* 
* 
**********************************************************************************************/
int main()
{
	//Menu();
	//PlayGame();
	//SetIniFile();
	/*std::cout << FilePlay() << std::endl;*/

	Connect Client;
	Client.Communicate();

	return 0;
}
