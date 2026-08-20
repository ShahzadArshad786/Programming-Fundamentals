



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
            cout<<num<< "  ";
        }

        num = num + 1 ; 
    }
    return 0 ; 
}