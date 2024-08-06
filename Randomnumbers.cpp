#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int x=time(0);
    srand((x));
    int randomNumber = 1 + rand() % 100;

    int guess;
    bool guessing = false;
    cout<< "*****Welcome to the RandomNumber Guessing Game*****"<<endl;
    cout<<"Try to guess a number between 1 to 100"<<endl;

    while(!guessing){
        cout<<"Enter your guessNumber: ";
        cin>>guess;
        if(guess == randomNumber){
            cout<<"Congratulations!!! You guessed the right number";
            guessing = true;
        }else if(guess < randomNumber){
            cout << "Too low.Try again!!!"<<endl;
        }else{
            cout << "Too high. Try again!!!"<<endl;
        }

        }
        return 0;
        
}