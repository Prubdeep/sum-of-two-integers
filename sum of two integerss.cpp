// 2nd integer work.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;
    cout << "Sum of two integers input by user \n";
    cout << ".................................. \n";
    cout << " Please input first number: ";
    cin >> num1;
    cout << "\n\n";
    cout << " Please input second number: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "Sum of the two numbers is : " << sum;
    cout << "\n\n";

    return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
