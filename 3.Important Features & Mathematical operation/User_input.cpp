#include <iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int age;
    cout<<"Whats ur full name:";
    getline(cin>>ws,name);
    cout<<"Whats ur Age:";
    cin>>age;
    cout<<"hey "<<name<<'\n'<<" you are "<<age <<"years old";
    return 0;
    

}