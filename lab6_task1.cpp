#include<iostream>
#include<string>
using namespace std;

//class definition
class Sandwich{
	string filling;
	double price;
	bool is_ready;
public:
	Sandwich();
	Sandwich(string, double);
	

	void setFilling();
	void setPrice();
	bool check_status();
	void printData();
};
Sandwich::Sandwich()
{ filling = "Default";
			price = 0.00f;
			is_ready = false;
}
Sandwich::Sandwich(string fill, double cost)
{
	filling = fill;
	price = cost;
	is_ready = false;
}
void Sandwich::setFilling()
{
	cout << "Enter Filling :";
	cin >> filling;
	is_ready = true;
}
void Sandwich::setPrice()
{
	cout << "Enter the pirce :";
	cin >> price;
}
bool Sandwich::check_status()
{
	return is_ready;
}
void Sandwich::printData()
{
	cout << "Welcome to ABC Sandwiches" << endl;
	cout << "Your Sandwich  has : " << filling << " filling ." << endl;
	cout << "The price of your sandwich is : " << price << endl;
	cout << "The Status of your Sandwich is :" << endl;
	if (is_ready)
	{
		cout << "-------------Ready------------------" << endl;
	}
	else
	{
		cout << "-------------Not Ready------------------" << endl;
		cout << "---------Please Wait SomeTime-----------" << endl;
	}

}




int main()
{
	Sandwich s1,s2("Chocolate",34.56);
	cout << "Sandwich ##1" << endl;
	s1.printData();
	cout << endl;
	cout << endl;
	cout << "Sandwich ##2" << endl;
	s2.printData();
	cout << endl;
	cout << endl;
	cout << "Sandwich ##3" << endl;
	s1.setFilling();
	s1.setPrice();
	s1.check_status();
	s1.printData();
	getchar();
	getchar();
	return 0;
}
