////////////////////////////////////////Header File//////////////////////////////////////////////
#include <iostream>
using namespace std;
class Weight{
private:
	double kilogram;
	double gram; 

public :
	Weight();
	Weight(double);
	void getWeight();
	void addWeight(Weight, Weight);
};

////////////////////////////////////////Source File//////////////////////////////////////////////

#include <iostream>
#include "Weight.h"
using namespace std;

// default values constructor
Weight::Weight()
{
	kilogram = 0.0;
	gram = 0.0;
}

//here we have a parametrized constructor which takes in weight entered by user and seperates its kilos and grams
Weight::Weight(double tst)
{
	kilogram = (int)tst;
	gram =(tst-kilogram)*1000;

}
void Weight::getWeight()
{
	cout << "The weight is : " <<kilogram<<" kg  " <<gram<<"  g " <<endl;
}
void Weight::addWeight(Weight w1, Weight w2)
{
	gram = w1.gram + w2.gram;
	kilogram = 0;
	if (gram >= 1000)
	{
		gram -= 1000;
		kilogram++;
	}
	kilogram += w1.kilogram + w2.kilogram;

}

////////////////////////////////////////Test File//////////////////////////////////////////////

#include <iostream>
#include "Weight.h"
using namespace std;
int main(){
	double x1, x2;
	cout << "Enter weight = ";
	cin >> x1;
	cout << "Enter weight = ";
	cin >> x2;

	Weight w1(x1), w2(x2),w3;
	w1.getWeight();
	w2.getWeight();
	w3.addWeight(w1, w2);
	w3.getWeight();
	getchar();
	getchar();
}
