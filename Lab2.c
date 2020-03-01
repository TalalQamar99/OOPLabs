#include <iostream>
#include<time.h>
using namespace std;

/*Muhammad Talal Qamar Sahi
 CMS 291552
 BEE 11D 
 */
/////////////////////////////////////////////////////
// function prototype to populate array with random numbers.
void populate_array(int *array1, int N);
// function prototype for printing an array
void print_array(int *array2, int N);
// function prototype for sorting an array
void sort(int *array3, int N);
// function prototype to find value in an array
bool user_find(int *arraynum, int N);

/*MAIN PROGRAM*/
int main()
{
	int nums[100];
	int userin;
	populate_array(nums, 10);
	cout << "The array is : " << endl;
	print_array(nums, 10);
	sort(nums, 10);
	cout << "The sorted array is : " << endl;
	print_array(nums, 10);
	cout << "\n";
	cout << "\n";
	cout << "Enter a number to find in the array ";
	cin >> userin;
	if (user_find(nums, userin))
		cout << "Value Found in the array";
	else
		cout << "Value Not Found" << endl;
	getchar();
	getchar();
}

/*********************************/
// function to populate array with random numbers.Numbers generated will be between 0 and 100
void populate_array(int *arraynum, int N)
{
	srand((unsigned)time(0));
	for (int j = 0; j < N; j++)
	{
		arraynum[j] = rand() % 100 +1;
	}
}

/************************************/
// function for printing an array
void print_array(int *arraynum, int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << " " <<arraynum[i] ;
	}
	cout << "\n";
}

/*********************************/
// function for sorting an array
void sort(int *arraynum, int N)
{
	int i, j,temp;
	for (i = 0; i < 10; i++) 
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arraynum[j] < arraynum[i]) 
			{
				temp = arraynum[i];
				arraynum[i] = arraynum[j];
				arraynum[j] = temp;

			}
		}
	}
}

/*********************************/
// function to find value in an array
bool user_find(int *arraynum,int x )
{int i;
	for (i = 0; i < 10; i++)
	{
		if (arraynum[i] == x)
		return true;
			}
	return false;
}
