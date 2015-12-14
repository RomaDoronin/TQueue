// Laba_Queue.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "TQueue.h"
#include "iostream"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	TQueue <int> Tay(200);

	Tay.TPushBegin(100);

	return 0;
}

