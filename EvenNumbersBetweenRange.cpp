
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

    int start , end ; 

    cout<<"Enter Value for Start of Range : " ;
    cin>> start ;

    cout<<"Enter Value For End of Range   : " ;
    cin>> end;

    cout<<"\nEven Numbers Between "<<start<< " to "<<end<< " are : ";

    while(start <= end)
    {
    
       if(start % 2 == 0)
       {
            cout<< start ;

             if (start + 2 <= end)
                    cout << " , ";
       }

       start = start + 1 ;
    }

    return 0 ; 
}