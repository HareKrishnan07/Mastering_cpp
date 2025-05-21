#include<iostream>
using namespace std;
int main ()
{
    int month;
    cout<<"Enter the month (1-12)";
    cin>>month;

    switch (month)
    {
    
    case 1:
        cout<<"its Jan";
        break;
    
    
    case 2:
        cout<<"its feb";
        break;
    
    
    case 3:
        cout<<"its mar";
        break;
    
    
    case 4:
        cout<<"its apr";
        break;
    
    
    case 5:
        cout<<"its may";
        break;
    
    
    case 6:
        cout<<"its Jun";
        break;
    
    
    case 7:
        cout<<"its jul";
        break;
    
    
    case 8:
        cout<<"its aug";
        break;
    
    
    case 9:
        cout<<"its sep";
        break;
    
    
    case 10:
        cout<<"its oct";
        break;
    
    
    case 11:
        cout<<"its nov";
        break;
    
    
    case 12:
        cout<<"its dec";
        break;
    default:
        cout<<"enter only numbers";

    }
}