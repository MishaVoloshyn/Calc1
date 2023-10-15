#include"ArrDataCalc.h"
#include"ArrSizeCalc.h"
#include"ArrValCalc.h"
#include <iostream>
using namespace std;

int main() {
	try
	{
		ArrValCalc a;
		a.Input();			
		cout << "Sum: " << a.doCalc();		

	}
	catch (ArrSizeCalc exception)
	{
		cout << exception.GetMessage() << endl;
	}
	catch (ArrDataCalc dataException) {
		cout << dataException.GetMessage() << endl;
	}
}