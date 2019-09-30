#include <iostream> // standard libraries
#include <string>
#include "FBullCowGame.h"
// #include "myCode.h" // user libraries

void PrintIntro();
void PlayGame();
std::string GetGuess();
void PrintBackGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiate a new game

int main()
{
	do
	{
		PrintIntro();
		PlayGame();
	} while (AskToPlayAgain() == 1);
	return 0;
}

// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5; // TODO ask player how long the word should be
	std::cout << "Welcome to Bulls and Cows, an amazing word game!\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

// get a guess from the player
std::string GetGuess()
{
	int CurrentGuess = BCGame.GetCurrentTry();

	std::string Guess = "";
	std::cout << "Try " << CurrentGuess << ". My guess is: ";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (Y/N) ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y'); // TODO validate the 'n/N' for no and repeat the question if the input was invalid
}

// repeat the guess back to user
void PrintBackGuess(std::string guess)
{
	std::cout << "Your guess is " << guess << ".\n";
	return;
}

// main game mechanics
void PlayGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();
	// loop for the number of turns asking for guesses
	for (int i = 0; i < MaxTries; i++) // TODO change loop to WHILE - progress only if the input was valid
	{
		std::string UserGuess = GetGuess(); // TODO guess validation - isogram, right length, one word, only alphabetical letters
		PrintBackGuess(UserGuess);
		std::cout << std::endl;
	}
}