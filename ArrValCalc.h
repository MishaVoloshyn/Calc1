#pragma once
#include <iostream>
#include <string>
using namespace std;

class ArrValCalc
{
public:
	int rows;
	int cols;
	string** arr;
public:
	ArrValCalc();
	ArrValCalc(int r, int c);
	void Input();
	int doCalc();
	int GetRows() {
		return rows;
	}
	int GetCols() {
		return cols;
	}
};