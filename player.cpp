#include "player.h"
#include "iostream"
#include <string>
using namespace std;


std::string Player::getPlayerName(){
	return name;
}
void Player::setName(std::string name){
	this -> name = name;
}
bool Player::saveGamePlay(){
	return isSave = true;
}
void Player::setScore(int score){
	this -> score = score;
}
int Player::getScore(){
	return score;
}

void Player::setConditionAnswer(bool isTrue){
	this -> isTrue = isTrue;
}
bool Player::getConditionAnswer(){
	return isTrue;
}
