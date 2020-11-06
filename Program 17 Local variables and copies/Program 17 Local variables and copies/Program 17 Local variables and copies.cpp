#include <iostream>
using namespace std;


void addNum(int num)
{
    num += 2;
    cout << "FUNCTION: num = " << num << endl;

}


int main()
{
    int myNum = 6;

    cout << "MAIN: Current number value: " << myNum << endl;
    
    addNum(myNum);

    cout << "MAIN: Number value after function: " << myNum << endl;
}

