#include <iostream> // standard libraries
#include <string>
// #include "myCode.h" // user libraries
using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
void PrintBackGuess();
bool AskToPlayAgain();

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
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, an amazing word game!\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

// get a guess from the player
string GetGuess()
{
	string Guess = "";
	cout << "My guess is: ";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? (Y/N) ";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');
}

// repeat the guess back to user
void PrintBackGuess(string guess)
{
	cout << "Your guess is " << guess << ".\n";
	return;
}

// main game mechanics
void PlayGame()
{
	constexpr int ATTEMPTS_LIMIT = 5;
	for (int i = 0; i < ATTEMPTS_LIMIT; i++)
	{
		string UserGuess = GetGuess();
		PrintBackGuess(UserGuess);
		cout << endl;
	}
}