#include "ArrValCalc.h"
#include "ArrSizeCalc.h"
#include "ArrDataCalc.h"
#include <iostream>
#include <cstring>
using namespace std;

ArrValCalc::ArrValCalc()
{
	rows = 0;
	cols = 0;
}

ArrValCalc::ArrValCalc(int r, int c)
{
	rows = r;
	cols = c;
	arr = new string * [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new string[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 50;
		}
	}
}

void ArrValCalc::Input()
{
	cout << "rows: ";
	cin >> rows;
	cout << "cols: ";
	cin >> cols;
	if (GetRows() != 4 || GetCols() != 4)
	{
		throw ArrSizeCalc("Errow size");
	}
	arr = new string * [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new string[cols];
	}
	for (int i = 0; i < rows; i++) {
		cout << "Enter number: ";
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}
}

int ArrValCalc::doCalc()
{
	int result = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = 0; k < arr[i][j].length(); k++) {
				if (!isdigit(arr[i][j][k]))
				{
					throw ArrDataCalc(i, j, "there is a symbol!");
				}
			}
			result += stoi(arr[i][j]);
		}
	}
	return result;
}