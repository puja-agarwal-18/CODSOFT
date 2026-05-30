#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess;
    cout<<"====== NUMBER GUESSING GAME ======"<<endl;
    cout<<"Guess a number between 1 and 100"<<endl;
    do{
        cout<<"Enter your guess"<<endl;
        cin>>guess;
        if(guess > randomNumber){
            cout<<"Too high! Try again:"<<endl;
        }else if(guess < randomNumber){
            cout<<"Too low! Try again:"<<endl;
        }else{
            cout<<"congratulations! you guessed the correct number"<<endl;
        }
    }
    while(guess != randomNumber);
    return 0;
    
}