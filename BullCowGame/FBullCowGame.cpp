#include "FBullCowGame.h"

void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	MyCurrentTry = 1;
	MyMaxTries = MAX_TRIES;
	return;
}

void FBullCowGame::FBUllCowGame()
{
	Reset();
}

int FBullCowGame::GetMaxTries() const
{
	return MyMaxTries ;
}

int FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}