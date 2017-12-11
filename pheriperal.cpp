#include "iostream"
#include "fstream"
#include "string"
#include "sstream"
#include "peripheral.h"
using namespace std;


void peripheral::saveScore(){
  myStr.append(getPlayerName()).append(" | ").append(to_string(getScore()));
  ofstream myStream(inputFile, ios::app);
  if(myStream.is_open())
    myStream << myStr<<'\n';
  myStream.close();
  cout<<"Saved. Thank you."<<endl;
}

void peripheral::gameEnding(){
  char isSaveInput;
  int a = 0;
  cout << "Your answer is false. Save Game? (Y/N) : ";cin >> isSaveInput;
  while(a == 0){
    if(isSaveInput == 'y' || isSaveInput == 'Y'){
      saveScore();
      a++;
    }else if(isSaveInput == 'N' || isSaveInput == 'n'){
      cout << "You don't want to save your score?Ok. Bye !"<<endl;
      a++;
    }
  }
    setConditionAnswer(false);
  }

string* peripheral::createArrayName(int size){
  string* arrayNamePlayer = new string[size];
  int index = 0;

  ifstream newStream(inputFile);
  if(newStream.is_open()){
    while(getline(newStream,myStr)){
      std::stringstream ss(myStr);
      ss >> array[0] >> temp >> array[1] >> temp;
      arrayNamePlayer[index] = array[0];
      index++;
    }
  }
  newStream.close();
  return arrayNamePlayer;
}

string* peripheral::createArrayScore(int size){
  string* arrayScorePlayer = new string[size];
  int index = 0;

  ifstream newStream(inputFile);
  if(newStream.is_open()){
    while(getline(newStream,myStr)){
      std::stringstream ss(myStr);
      ss >> array[0] >> temp >> array[1] >> temp;
      arrayScorePlayer[index] = array[1];
      index++;
    }
  }
  newStream.close();
  return arrayScorePlayer;
}

void peripheral::createArray(int size){
  arrayNamePlayer = createArrayName(size);
  arrayScorePlayer = createArrayScore(size);
  lengthOfText = size;
}

int peripheral::getLengthHistoryBoard(){
  int length = 0;
  ifstream myStream(inputFile);
  if(myStream.is_open()){
    while(getline(myStream, myStr))
      length++;
  }
  myStream.close();
  return length;
}

int peripheral::getHighScoreDirect(string names){
  int player_score=0; // store player score sementara

  for(int i =0;i<lengthOfText;i++){
    if(arrayNamePlayer[i] == names){ // kalo ketemu maka +1

        if(stoi(arrayScorePlayer[i])>= player_score){
            player_score = stoi(arrayScorePlayer[i]);
        }
      }
  }
   return player_score;
}


int peripheral::checkHowManyName(string names){
  int player_score=0; // store player score sementara

  for(int i =0;i<lengthOfText;i++){
    if(arrayNamePlayer[i] == names){ // kalo ketemu maka +1

        if(stoi(arrayScorePlayer[i])>= player_score){
            player_score = stoi(arrayScorePlayer[i]);
        }
      }
  }
   return player_score;
}
