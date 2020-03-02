/////////////////////////////UNIT CONVERSION ////////////////////////////////////////////
#include<iostream>
using namespace std;
class ConvertZZ
{
private :
	double foot, pounds, fheit;
	char choice;
public :
	ConvertZZ();
	void userChoice();
	void setFeet();
	void setPound();
	void setfheit();
	void printLen();
	void printWei();
	void printTemp();
};
#include<iostream>
#include<string>
#include "UnitConversion.h"
using namespace std;
ConvertZZ::ConvertZZ()
{
	foot = 0.0;
	pounds = 0.0;
	fheit = 0.0;
}
void ConvertZZ::userChoice()
{
	cout << "Which conversion do you want : " << endl;
	cout << "Foot to Meter -- l " << endl;
	cout << "Pound to Kilogram -- k " << endl;
	cout << "Fahrenheit to Celsius --  f" << endl;
	cout << "Enter your choice : ";
	cin >> choice;
	if (choice == 'l' || choice == 'L')
	{
		setFeet();
		printLen();
	}
	else if (choice == 'k' || choice == 'K')
	{
		setPound();
		printWei();
	}
	else if (choice == 'f' || choice == 'F')
	{
		setfheit();
		printTemp();
	}
	else
	{
		cout << "Wrong Choice. Select from given options " << endl;
	}

}
void ConvertZZ::setFeet()
{
	cout << "Enter Lenght in Feet ";
	cin >> foot;
}
void ConvertZZ::setPound()
{
	cout << "Enter weight in Pound : ";
	cin >> pounds;
}
void ConvertZZ::setfheit()
{
	cout << "Enter temperature in Fahrenheit : ";
	cin >> fheit;
}
void ConvertZZ::printLen()
{
	double meters;
	meters = foot * 0.3048;
	cout << "The Length in Meters is : " << meters << endl;

}
void ConvertZZ::printTemp()
{
	double celsius;
	celsius= (fheit - 32)*5.00/9.00;
	cout << "The Temperature in Celsius is : " << celsius << endl;
}
void ConvertZZ::printWei()
{
	double kilog;
	kilog = pounds*0.453592;
	cout << "The Weight in Kilogram is : " << kilog << endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
