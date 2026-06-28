#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
srand(time(0));
int maxRange;
int maxAttempts;
int guess=0;
int attempts=0;
char playAgain;
int difficulty;
int secret_number;

cout<<"Welcome to the Number Guessing Game!"<<endl;

do
{
guess=0;
attempts=0;

cout<<"Choose a difficulty level"<<endl;
cout<<"1. Easy (1-50)"<<endl;
cout<<"2. Medium (1-100)"<<endl;
cout<<"3. Hard (1-200)"<<endl;
cout<<"Enter your choice (1-3): ";
cin>>difficulty;

switch(difficulty)
    {
case 1:
maxRange=50;
maxAttempts=10;
break;

case 2:
maxRange=100;
maxAttempts=7;
break;

case 3:
maxRange=200;
maxAttempts=5;
break;

default:
cout<<"Invalid choice. Defaulting to Medium."<<endl;
maxRange=100;
maxAttempts=7;
    }
cout<<"You have "<<maxAttempts<<" attempts. Good luck!"<<endl;

secret_number=rand()%maxRange+1;

while(guess!=secret_number && attempts<maxAttempts)
    {
cout<<"Attempts left: "<<maxAttempts-attempts<<endl;
cout<<"Enter your Guess:";
cin>>guess;
attempts++;

if(guess>secret_number)
        {
cout<<"Your guess is too high. Try again."<<endl;
        }
else if(guess<secret_number)
        {
cout<<"Your guess is too low. Try again."<<endl;
        }
else
        {
cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts."<<endl;
cout<<"You Win!"<<endl;
cout<<endl;
        }
    }

if(guess!=secret_number)
        {
cout<<"Sorry, you've used all your attempts. The secret number was "<<secret_number<<"."<<endl;
cout<<"You Lose!"<<endl;
        }
cout<<"Do you want to play again? (y/n): ";
cin>>playAgain;

}
while(playAgain=='y' || playAgain=='Y');
cout<<"Thanks for playing!"<<endl;
return 0;
} 