#include <iostream>
using namespace std;


void smallestNumber(int num1, int num2)
{

	if (num1 > num2)
	{
		cout << "The highest number is: " << num1 << endl;
	}
	else if (num2 > num1) 
	{
		cout << "The highest number is: " << num2 << endl;
	}
	else
	{
		cout << "The numbers are both the same value!" << endl;
	}

}




int main()
{
	int a;
	int b;

	cout << "Input a number please" << endl;
	cin >> a;
	cout << "Input another number please" << endl;
	cin >> b;


	smallestNumber(a,b);


}

