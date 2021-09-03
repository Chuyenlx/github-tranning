#pragma once

#include <iostream>
#include <string>
#include <WS2tcpip.h>
#include "Board.h"
#include "Play.h"

#pragma comment(lib, "WS2_32.lib")

#define READY      "Ready"

#define T TRUE
#define F FALSE

class Connect
{
private:
	int Turn = 0;

public:
	void SetTurn(int turn);
	int GetTurn();

	void Connect_TCPIP();
	void Disconnect();

	void SplitAxis(std::string buff, int* data);

	void SendMassage(std::string str);
	char* ReceiveMessage();

	void Communicate();
	void Check_out(Board& BOARD, int* Check);
};
