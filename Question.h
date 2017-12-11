#ifndef QUESTION_H
#define QUESTION_H

class Question{
private:
	int a,b, answerKey;
	char operan;
public:
	Question();
	~Question();
	void generateAnswer();
	void setAnswerKey(int answerKey);
	void setFirst();
	void setSecond();
	void printQuestion();
	int generateRandomNumber();
	int getAnswerKey();
	int getFirst();
	int getSecond();
	char setOperan();
	char getOperan();
};

#endif
