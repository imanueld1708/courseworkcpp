#ifndef PERIPHERAL_H
#define PERIPHERAL_H
#include "player.h"
#include "string"

class peripheral:public Player{
private:
	std::string inputFile = "text.txt";
  std::string myStr;
  std::string temp;
  std::string array[2];

  std::string* arrayNamePlayer;
  std::string* arrayScorePlayer;
	int lengthOfText;

public:

	void gameEnding();
	void saveScore();
  int getLengthHistoryBoard();
  std::string* createArrayName(int size);
  std::string* createArrayScore(int size);
  void createArray(int size);
  int getHighScoreDirect(std::string names);
	int checkHowManyName(std::string name);
};

#endif
