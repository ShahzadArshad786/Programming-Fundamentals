#include<iostream>
#include<stack>
#include<algorithm>

using namespace std ;

int precedence(char op)
{
    if(op == '^')
    {
        return 3 ; 
    }
    else if(op == '*' || op == '/')
    {
        return 2 ; 
    }

    else if(op == '+' || op == '-')
    {
        return 1 ; 
    }
    else 
    {
        return 0 ; 
    }
}

bool isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}


string infixToPrefix(string infix)
{

    stack<char> s  ;
    string result = "" ;

    // 1. Reverse the Infix Expression

    reverse(infix.begin() , infix.end()) ;

    // 2. Swap brackets 

    for(int i = 0 ; i < infix.length() ; i++)
    {

        if(infix[i] == '(')
        {
            infix[i] = ')' ;
        }

        else if(infix[i] == ')')
        {
            infix[i] = '(' ;
        }
    }
    // Covert Infix to Prefix 
    for (char ch : infix)
    {

        if(isalnum(ch))
        {
            result = result + ch ; 
        }
        else if(ch == '(')
        {
            s.push(ch) ;
        }
        else if(ch == ')')
        {
            while(!s.empty() && s.top() != '(')
            {
                result = result + s.top();
                s.pop(); 
            }
            s.pop(); // remove '(' 
        }

        else if(isOperator(ch))
        {
            while(!s.empty() && s.top() != '(' && precedence(s.top()) > precedence(ch))
            {
                result = result + s.top();
                s.pop(); 
            }
            s.push(ch); 
        }
    }

    while(!s.empty())
        {
             result = result + s.top();
            s.pop(); 
        }

    reverse(result.begin() , result.end()) ;

    return result ; 
}

int main()
{

    string infix;

    cout << "Enter an infix expression: ";
    cin >> infix;

    cout << "Prefix expression: "<< infixToPrefix(infix);

    return 0 ; 
}