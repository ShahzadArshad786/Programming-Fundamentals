
/*
    Write a program that inputs ranges from the user and displays all even numbers between the given range. 

    For Example, if user enter 5 as start of range, and 21 as end of range, then display all even numbers 
    between 5 and 21. 

    Output will be: 

    Even Numbers Between 5 and 21 are : 6 , 8 , 10 , 12 , 14 , 16 , 18 , 20
*/


#include<iostream>
using namespace std ;

int main()
{

    int start_of_Range , end_of_Range ; 

    cout<<"Enter Value for Start of Range : " ;
    cin>> start_of_Range ;

    cout<<"Enter Value For End of Range   : " ;
    cin>> end_of_Range;

    int num = start_of_Range ; 

    cout<<"\nEven Numbers Between "<<num<< " to "<<end_of_Range<< " are : ";
    while(num <= end_of_Range)
    {
        if(num % 2 == 0)
        {
            cout<<num<< " , ";
        }

        num = num + 1 ; 
    }
    return 0 ; 
}