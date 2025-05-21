#include <iostream>
using namespace std;
int main()
{
    //replacement to if/else
    // condition ? exp1:exp2;
    int oe;
    cout<< "Enter the number to find odd or even: ";
    cin>>oe;
    cout<<(oe%2==0 ? "your number is even" : "your number is odd") ;
}