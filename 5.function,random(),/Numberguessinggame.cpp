#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int num;
    int tries;
    int guess;


    srand(time(NULL));
    num=(rand()%100)+1;
    cout<<"******************NUMBER GUESSING GAME******************"<<'\n';

    do{    
    cout<<"Enter your guess(1-100): ";
        cin>>guess;
        tries++;
        if (guess>num)
        {
            cout<<"Too high \n";
        }
        else if (guess<num)
        {
            cout<<"Too low \n";
        }
        else{cout<<"That's correct You found "<<num<<" in "<<tries<<" tries ";}
    

    }while(guess!=num);
    return 0;


    cout<<"********************************************************";
   
}