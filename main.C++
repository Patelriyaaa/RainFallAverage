#include <Windows.h> 
#include <iostream>
#include <string>
using namespace std;


void main()
{
	string month1 , month2, month3; // Display the month
	double rain1, rain2, rain3; // Display the rain in inches
	double average_rainfall; // Display the avergae rainfall
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 113);

	cout << "Enter the name of each month" << endl;
	cin >> month1 >> month2 >> month3;
	cout << "Enter the amount of rain in inches that fell each month. " << endl;
	cin >> rain1 >> rain2 >> rain3;
	average_rainfall = rain1 * rain2 * rain3 / 3.0;
	cout << "The average rainfall for the months is " << average_rainfall << " inches" <<  endl;

	system("pause");
}
