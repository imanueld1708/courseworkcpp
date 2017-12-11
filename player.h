#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
private:
	int score, bestScore;
	std::string name;
	bool isSave;
	bool isTrue = true;
public:
	std::string getPlayerName();
	void setName( std::string name);
	bool saveGamePlay();
	void setScore(int score);
	int getScore();
	void setConditionAnswer(bool isTrue);
	bool getConditionAnswer();
};

#endif
