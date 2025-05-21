#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age :";
    cin>>age;

    if(age>=100)
    {
        cout<<'\n'<<"You are dead by now!";
    }

    else if(age>=18)
    {
        cout<<'\n'<<"Welcome to the Game";
    }

    else if(age <0){
        cout<<"You are not born yet";

    }
    else
    {
        cout<<"Sorry,You are not able to enter kiddo!!";
    }
}
