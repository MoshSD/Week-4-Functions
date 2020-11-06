#include <iostream>
using namespace std;



bool numEven(int currentInt)
{
	if (currentInt % 2 == 0)
		return true;
	else
		return false;

}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "The total number of odd numbers entered were: " << numOfOdd << endl;
	cout << "The total number of even numbers entered were: " << numOfEven << endl;
	cout << "The sum of all the odd numbers entered was: " << oddTotal << endl;
	cout << "The sum of all the even numbers entered was: " << evenTotal << endl;


}



int main()
{
	int numOfOdd = 0;
	int oddTotal = 0;
	int numOfEven = 0;
	int evenTotal = 0;
	int currentInt = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Please input a number" << endl;
		cin >> currentInt;
		
		bool isNumEven = numEven(currentInt);
		if (isNumEven == false)
		{
			numOfOdd++;
			oddTotal += currentInt;
		}
		
		else
		{
			numOfEven++;
			evenTotal += currentInt;
		}
	}

	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
}

