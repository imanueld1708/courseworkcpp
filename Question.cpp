#include "Question.h"
#include "iostream"
#include "random"
using namespace std;


Question::Question(){
	this -> a = generateRandomNumber();
	this -> b = generateRandomNumber();
	this -> operan = setOperan();
}
Question::~Question(){}

void Question::generateAnswer(){

	if(getOperan() == '+' ){
		setAnswerKey(a + b);
		printQuestion();
	}else if(getOperan() == '-'){
		setAnswerKey(a - b);
		printQuestion();
	}else if(getOperan() == '*'){
		setAnswerKey(a * b);
		printQuestion();
	}
}
int Question::generateRandomNumber(){
	std::random_device r;
	std::default_random_engine e1(r());
			// Choose a random mean between 1 and 6
	std::uniform_int_distribution<int> uniform_dist(1, 10);
	int random = uniform_dist(e1);
	return random;
}
char Question::setOperan(){
	std::random_device r;
	std::default_random_engine e1(r());
			// Choose a random mean between 1 and 6
	std::uniform_int_distribution<int> uniform_dist(1, 3);
	int result = uniform_dist(e1);
	if(result == 1 )
		return '+';
	else if(result == 2)
		return '-';
	else if(result == 3)
		return '*';
}
char Question::getOperan(){
	return operan;
}
int Question::getAnswerKey(){
	return answerKey;
}
void Question::setAnswerKey(int answerKey){
	this -> answerKey = answerKey;
}
void Question::setFirst(){
	this -> a = generateRandomNumber();
}
void Question::setSecond(){
	this -> b = generateRandomNumber();
}
int Question::getFirst(){
	return a;
}
int Question::getSecond(){
	return b;
}
void Question::printQuestion(){
	cout << a << " " << getOperan() << " "<< b << " = ";
}
