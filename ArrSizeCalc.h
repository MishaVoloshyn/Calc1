#pragma once
#include <iostream>
using namespace std;
class ArrSizeCalc
{
private:
	char message[50];
public:
	ArrSizeCalc();
	ArrSizeCalc(const char* mes);
	const char* GetMessage();
};
