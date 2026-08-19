
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