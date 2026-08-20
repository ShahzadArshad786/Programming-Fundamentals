/*
    Write a program that takes a number from the keyboard and checks whether that number is positive or not. 
    If it is positive, then check whether it is even or odd, and display the result accordingly
*/

#include<iostream>
using namespace std ; 

int main()
{

    int num ; 

    cout <<"Enter the Number : " ;
    cin >> num ; 

    if(num > 0)
    {

        if(num % 2 == 0)
        {
            cout<< num << " is Positive and Even"<<endl; 
        }
        else
        {
            cout<< num << " is Positive and Odd"<<endl;
        }
    }

    else
    {
        cout<< num << " is Negative"<<endl;
    }

    return 0 ; 
}