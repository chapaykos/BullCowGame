#pragma once
#include <string>

class FBullCowGame
{
public:
	void FBUllCowGame(); // constructor

	int GetMaxTries() const;
	int GetCurrentTry() const; // TODO add incrementation
	bool IsGameWon() const; // TODO implement mechanics

	void Reset();
	bool CheckGuessValidity(std::string);

private:
	int MyCurrentTry;
	int MyMaxTries;
};