#include <iostream>
using namespace std ;
int main()
{
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~CALCULATOR~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    <<endl;
    double num1,num2,result;
    char op;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>op;
    cout<<"Enter the #num1: ";
    cin>>num1;
    cout<<"Enter the #num2: ";
    cin>>num2;

    switch (op)
    {
    case '+':
        result = num1+num2;
        cout<<"Result:"<<result<<'\n';
        break;
    case '-':
        result = num1-num2;
        cout<<"Result:"<<result<<'\n';
        break;
    case '*':
        result = num1*num2;
        cout<<"Result:"<<result<<'\n';
        break;
    case '/':
        result = num1/num2;
        cout<<"Result:"<<result<<'\n';
        break;
    
    default:
        cout<<"that not valid";
        break;
    }






































    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

}