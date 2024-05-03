//number guesser

//main idea: computer generates a number, you guess until you get the correct answer
//using a random function(???)
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

int main(){
int retry;
string dyAccept;
  do{
      //create user choices
    cout<<"Welcome to this number guessing game!\n";
    cout<<"The computer will generate a random number from 1 to 10 each run you go!\n";
    cout<<"You will only get 3 tries, if you fail YOU DIE! MUEH HEHEHEHE!\n";
    cout<<"You have one chance left HUMAN, do you ACCEPT or do you PUSSY out?\n";
    cout<<"Answer only with 'I accept' or 'I do not accept'\n";
    getline(cin, dyAccept);
    
    while(true){
        if(dyAccept == "I accept"){
            cout<<"Well done, my son. You have chosen wisely!\n";
            break;
        }else if(dyAccept == "I do not accept"){
            cout<<"BEGONE! AND NEVER RETURN!";
            return 0;
        }else{
            if(retry == 1){
                cout<<"So you have restarted the game, eh?? Well pick a choose! And again choose wisely. Because a second chance will only happen if you win! MUE HEHEHE\n";
                getline(cin, dyAccept);
            }else{
                cout<<"Choose a proper choice you nimwit!\n";
                getline(cin, dyAccept);
            }
        }
    }
    
    //include attempts
    int uAttempt = 0;
    int aCount = 0;

    cout<<"You have three(3) attempts so be wise about your choice!\n\n";

    //create the randomness of the computer
    int randomVal;
    int randomT = time(0);
    int userInput;

    srand(randomT);
    randomVal = (rand()%10)+1;
    cout<<randomVal;

    cout<<"Enter your guess!\n";

    while(aCount<3){
        cin>>userInput;
            if(userInput == randomVal){
              cout<<"You guessed right!\n";
              break;
            }else{
              cout<<"TF\n";
              aCount++;
              continue;
            }
    }
  if(aCount == 3){
      cout<<"You have failed the guessing game, you shall not be given a chance no more!";
      cout<<"\nYou have been warned that you will die!";
      return 0;
  }

  cout<<"Now that you have guessed the correct number\n";
  cout<<"You shall receive.....\n";
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You shall receive.....\n";
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You shall receive.....\n";
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You shall receive.....\n";
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You shall receive.....\n";
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You shall receive.....\n";
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You shall receive.....\n";
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You shall receive.....\n";
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You shall receive.....\n";
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You shall receive.....\n";

  cout<<"\nNOTHING LOL, thanks for trying this shit I have created :)\n";
  cout<<"How about going for another try?(press 1 to try, press 2 to exit): ";
  cin>>retry;
    if(retry == 2){
      cout<<"Once again, thank you!:))";
      return 0;
    }

  }while(retry == 1);
}