#include "Medium.h"
#include "iostream"
using namespace std;


Medium::Medium():Question(){
	this-> c = generateRandomNumber();
	this-> operan2 = setOperan();
}
int Medium::getThird(){
	return c;
}
char Medium::getOperan2(){
	return operan2;
}
void Medium::printQuestion(){
	cout << getFirst() << " " << getOperan() << " " << getSecond() << " " << getOperan2() << " " << getThird() << " = ";
}

void Medium::generateAnswer(){
	if(getOperan() == '+' ){
		switch(getOperan2()){
			case '+':
			setAnswerKey(getFirst() + getSecond() + getThird());
			printQuestion();
			break;
			case '-':
			setAnswerKey(getFirst() + getSecond() - getThird());
			printQuestion();
			break;
			case '*':
			setAnswerKey(getFirst() + (getSecond() * getThird()));
			printQuestion();
			break;
		}
	}
	else if(getOperan() == '-'){
		switch(getOperan2()){
			case '+':
			setAnswerKey(getFirst() - getSecond() + getThird());
			printQuestion();
			break;
			case '-':
			setAnswerKey(getFirst() - getSecond() - getThird());
			printQuestion();
			break;
			case '*':
			setAnswerKey(getFirst() - (getSecond() * getThird()));
			printQuestion();
			break;
		}
	}
	else if(getOperan() == '*'){
		switch(getOperan2()){
			case '+':
			setAnswerKey((getFirst() * getSecond()) + getThird());
			printQuestion();
			break;
			case '-':
			setAnswerKey((getFirst() * getSecond()) - getThird());
			printQuestion();
			break;
			case '*':
			setAnswerKey(getFirst() * getSecond() * getThird());
			printQuestion();
			break;
		}
	}
}
