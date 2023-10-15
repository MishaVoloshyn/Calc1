#pragma once
#include <iostream>
using namespace std;
class ArrDataCalc
{
private:
	char message[100];
public:
	ArrDataCalc();
	ArrDataCalc(int i, int j, const char* mes);
	const char* GetMessage();
};