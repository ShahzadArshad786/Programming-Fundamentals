
/*

    Write a program using C++ that inputs an positive number and finds its factorial and display the factorial value. 

    If the user input 6, the output will be displayed as:

    Factorial of 6 is : 720

*/


#include<iostream>
using namespace std ;

int main()
{

    int num , fact = 1 ; 

    cout<<"Enter an integer value : " ;
    cin>>num ; 

    for(int i = 1 ; i <= num ; i++)
    {
        fact = fact * i ; 
    }

    cout<<"Factotial of "<<num<< " is : "<<fact<<endl; 
     
    return 0 ; 
}