#ifndef MEDIUM_H
#define MEDIUM_H
#include "Question.h"

class Medium:public Question{
private:
	char operan2;
	int c;
public:
	Medium();
	int getThird();
	char getOperan2();
	void printQuestion();
	void generateAnswer();
};

#endif
