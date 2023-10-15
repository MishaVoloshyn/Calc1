#include "ArrDataCalc.h"
#include <iostream>
using namespace std;

ArrDataCalc::ArrDataCalc()
{
}

ArrDataCalc::ArrDataCalc(int i, int j, const char* mes)
{
	strcpy_s(message, mes);
	cout << "In arr[" << i << "][" << j << "] ";
}

const char* ArrDataCalc::GetMessage()
{
	return message;
}