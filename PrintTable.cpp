
/*

    Write a program using C++ that inputs an positive number and prints table of that input number using any loop. 

    If the user input 5, the output will be displayed as:

    5 * 1 = 5
    5 * 2 = 10
    5 * 3 = 15
    5 * 4 = 20
    5 * 5 = 25
    5 * 6 = 30
    5 * 7 = 35
    5 * 8 = 40
    5 * 9 = 45
    5 * 10 = 50

*/

#include<iostream>
using namespace std ; 

int main()
{

    int num ; 

    cout<<"Enter an Integer Number for a Table : ";
    cin>> num ; 

    for(int i = 1 ; i <= 10 ; i++)
    {
        cout<< num << " * "<< i << " = "<< num * i <<endl; 
    }

    return 0 ; 
}