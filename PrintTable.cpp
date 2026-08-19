
/*

    Write a program that inputs an integer positive number and prints table of that input number using any loop. 

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