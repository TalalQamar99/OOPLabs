/* Muhammad Talal Qamar Sahi
Lab 1: Introductio CMS : 291552
CMS : 291552
*/
#include <iostream>
#include <math.h>
using namespace std;

//function for finding average 
double average(int num){
	int avgr;
	avgr = num / 5;
	return avgr;

}

// function for displaying average
void dis_avg(double num){
	cout << "The average is " << num << endl;
}
void dis_var(double num){
	cout << "The variance is " << num << endl;
}
void dis_sdevt(double num){
	cout << "The standard deviation is " << num << endl;
}

//main 
int main() {
	int nums[5], sum = 0, nums2[5], choice;
	double avrg, sdev, variance, sigma = 0.00f;
	cout << "Enter 1 to calculate values and 2 to exit :"<<endl;
	cin >> choice;
	while (choice != 2){
		for (int i = 0; i < 5; i++)
		{
			cout << "Enter number : ";
			cin >> nums[i];
			sum += nums[i];
		}
		avrg = average(sum);
		for (int j = 0; j < 5; j++)
		{
			nums2[j] = nums[j] - avrg;
			sigma += pow(nums2[j], 2);
		}
		variance = sigma / 5;
		sdev = sqrt(variance);
		dis_avg(avrg);
		dis_var(variance);
		dis_sdevt(sdev);
		cout << "Enter 1 to calculate values and 2 to exit :";
		cin >> choice;
	}
	system("pause");
}
