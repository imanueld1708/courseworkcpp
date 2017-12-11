#include "iostream"
#include "string"
#include "random"
#include "fstream"

#include "Medium.h"
#include "Question.h"
#include "player.h"
#include "peripheral.h"

using namespace std;
void clearscreen(){
	for(int i = 0; i<20;i++){
		cout<<endl;
	}
}


int main(){
	string name;
	int score = 0;
	int bestScores = 0;
	int userInput;
	int lengthh;

	peripheral player;
	clearscreen();
	cout<< "Welcome!"<<endl<<"This game is a simple game to learn mathematics, at least you can waste your time for 1 minute..."<<endl;
	cout<< "But first, Let me know your name. Yup, type it to this side > ";
	cin >> name;
	player.setName(name); //save name to object

	//Code chunk for getting bestScores of given name player
	lengthh = player.getLengthHistoryBoard(); // size arry
	player.createArray(lengthh);

	// cout<<player.checkHowManyName(name);



	//player.createArrayIndexOfName(name,lengthh);
	//cout << player.getIndex();

	// cout <<"Mentioned in: " <<player.getSumOfPlayerHistory(name,lengthh)<<endl;
	// player.coutt(name,lengthh);
	//

	
	if(player.checkHowManyName(name) == 0){
		cout<< "Hi " << player.getPlayerName() << "! You have no record for this game" << endl <<endl;
	}else {
		bestScores = player.getHighScoreDirect(name);
		cout<< "Hi " << player.getPlayerName() << "! Your best score is: " << bestScores <<endl<<endl;}

	// cout << "Instruction: You will be given set of counting exercise. Addition, Substraction, and Multiplication. Simple, Answer it as much as you can."<< endl;
	// cout << "Please input NUMBER ONLY. minus operator (-) also be able to use for answering the question" << endl;
	// cout<< "Shall we begin? First Question is:" <<endl<<endl;
	//
	//
	// 	try{
	// 	while(player.getScore() >= 0 && player.getConditionAnswer() == true){
	//
	// 		Medium medium;
	// 		Question question;
	//
	// 		if(player.getScore() > 5 && player.getConditionAnswer() == true){
	//
	// 			medium.generateAnswer();
	// 			cin >> userInput;
	// 			if(userInput != medium.getAnswerKey())
	// 				player.gameEnding();
	// 			else {
	// 				score++;
	// 				player.setScore(score);
	// 			}
	// 		}else{
	//
	// 			question.generateAnswer();
	// 			cin >> userInput;
	//
	// 			if(userInput != question.getAnswerKey())
	// 				player.gameEnding();
	// 			else {
	// 				score++;
	// 				player.setScore(score);}
	// 		}
	// 	}
	// }catch (const char *e){
	// 	cout << e<<endl;
	// }
}
