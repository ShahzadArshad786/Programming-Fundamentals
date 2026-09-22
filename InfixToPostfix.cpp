#include<iostream>
#include<stack>
#include<cctype>
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

bool isOperator( char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || 
        ch == '/' || ch == '^' );
}

string infixToPostfix(string infix)
{
    stack <char> s ; 
    string result = "" ;

    for(char ch : infix)
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

            s.pop();
        }

        else if(isOperator(ch))
        {
             while(!s.empty() && s.top() != '(' && 
             precedence(s.top()) >= precedence(ch))
            {
                result = result + s.top(); 
                s.pop(); 
            } // end of while inner loop 

            s.push(ch);
        } //  end of else if 
    } // end of for each loop 

    while(!s.empty())
    {
        result = result + s.top();
        s.pop(); 
    }

    return result ; // return postfix string 
} // end of Infix to Postfix method 

int main()
{

    string infix; 
    cout << "Enter infix expression: "; 
    cin >> infix; 
    
    cout << "Postfix expression: " << infixToPostfix(infix);

    return 0 ; 
}