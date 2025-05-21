#include <iostream>
using namespace std;

int addnumber( int a , int b)
{
    int result = a+b;
    return result;

}

int main()
{
    int firstnum;
    int secondnum;

    cout<<"Enter The First Number:";
    cin>>firstnum;
    cout<<"Enter The Second Number:";
    cin>>secondnum;
    int sum = addnumber(firstnum,secondnum);
    cout<<"Sum of both number is "<<sum<<endl;

    return 0;


}