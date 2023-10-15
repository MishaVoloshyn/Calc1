#include "ArrSizeCalc.h"
#include <iostream>
using namespace std;

ArrSizeCalc::ArrSizeCalc()
{
}

ArrSizeCalc::ArrSizeCalc(const char* mes)
{
	strcpy_s(message, mes);
}

const char* ArrSizeCalc::GetMessage()
{
	return message;
}