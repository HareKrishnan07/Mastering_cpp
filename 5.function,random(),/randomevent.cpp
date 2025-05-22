#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int randd=rand()%5+1;
    switch (randd)
    {
    case 1 : cout<<"You won Toy";
        break;
    case 2 : cout<<"You won t-shirt";
        break;
    case 3 : cout<<"You won console";
        break;
    case 4 :cout<<"You won dog";
        break;
    case 5 :cout<<"You won concert ticket";
        break;
    
  
    }
}
