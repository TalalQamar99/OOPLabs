///////////////////////////////////HEADER FILE //////////////////////////////////////////

#include <iostream>
using namespace std;
class Class_Average{
private:
	int maths;
	int english;
	int science;
	double avg_eng;
	double avg_math;
	double avg_sci;
public :
	Class_Average();
	Class_Average(int a, int b, int c);
	void calc_average(Class_Average, Class_Average, Class_Average, Class_Average, Class_Average);
	void dispAvg();
	~Class_Average();
};

///////////////////////////////////SOURCE FILE //////////////////////////////////////////

#include <iostream>
#include "Class_Average.h"
using namespace std;

Class_Average::Class_Average()
{
	maths = 0;
	english = 0;
	science = 0;
}
Class_Average::Class_Average(int a, int b, int c)
{
	english = a;
	science = b;
	maths = c;
}
void Class_Average::dispAvg()
{
	cout << "THE AVERAGE OF ENGLISH IS : " << avg_eng << endl;
	cout << "THE AVERAGE OF SCIENCE IS : " << avg_sci << endl;
	cout << "THE AVERAGE OF MATHS IS : " << avg_math << endl;
}
void Class_Average::calc_average(Class_Average a1, Class_Average a2, Class_Average a3, Class_Average a4, Class_Average a5)
{
	avg_eng = (a1.english + a2.english + a3.english + a4.english + a5.english) / 5.0;
	avg_sci = (a1.science + a2.science + a3.science + a2.science + a5.science) / 5.0;
	avg_math = (a1.maths + a2.maths + a3.maths + a4.maths + a5.maths)/5.0;
}
Class_Average::~Class_Average(){};

///////////////////////////////////TEST FILE //////////////////////////////////////////

#include <iostream>
#include "Class_Average.h"
using namespace std;
int main(){
	Class_Average c1(99, 85, 74), c2(70, 89, 52), c3(91, 74, 15), c4(85, 96, 76), c5(96, 74, 16),c_avg;
	cout << endl;
	cout << endl;
	c_avg.calc_average(c1, c2, c3, c4, c5);
	c_avg.dispAvg();
	getchar();
	getchar();
	return 0; 
}
