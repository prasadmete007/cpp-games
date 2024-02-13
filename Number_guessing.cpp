/******************************************************************************
Number guessing game in cpp/c++
*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int number = rand()%100;
    int guess = 0;
    do{
        cout<<"enter guess 1-100 : ";
        cin>>guess;
        
        if(guess>number){
            cout<<"guess lower\n";
        }
        else if(guess<number){
            cout<<"guess higher\n";
        }
        else
            cout<<"you won\n";
    }while(guess!=number);
    
    

    return 0;
}
