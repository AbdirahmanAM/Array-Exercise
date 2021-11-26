// ArrayExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Prepared by: Abdirahman Gedi
                137748
                
                Array Exercise*/

#include <iostream>

using namespace std;

int main()
{
    cout << "................................................................................." << endl;
    cout << "This is a program that outputs the sum, product and mean of elements in an array." << endl;
    cout << "................................................................................." << endl;
    cout << endl;

    cout << "The elements in the array are: 10, 20, 30, 40, 50, 60, 70, 80, 90, 100" << endl;
    cout << endl;

    int ten[10] = { 10,20,30,40,50,60,70,80,90,100 }; // Array declaration and initialization
    int i = 0;

    // THE SUM OF THE ELEMENTS

    int sum = 0; // Declaration and initialization

    for (i = 0; i < 10; i++) 
    {
        sum += ten[i];
    } // Computing the sum

    cout << "The sum of the elements is: "; cout << sum; // Printing the sum
    cout << endl;


    // THE PRODUCT OF THE ELEMENTS
 
    int product{};

    product = ten[0]*ten[1]*ten[2]*ten[3]*ten[4]*ten[5]*ten[6]*ten[7]*ten[8]*ten[9];

    cout << "The product of the elements is: "; cout << product;
    cout << endl;

    
    // FINDING THE AVERAGE

    int average = 0;
    int count = 10;

    average = sum / count; // Computing the average

    cout << "The average of the elements is: "; cout << average; // Printing the average
    cout << endl;

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
