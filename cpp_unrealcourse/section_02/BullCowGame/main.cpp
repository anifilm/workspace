/*
This is the console executable, that makes use of the BullCow class
This acts as the view in a MVC pattern, and is responsible for all
user interaction. For game logic see the FBullCowGame class.
*/

#pragma once
#include <iostream>
#include <string>
#include "FBullCowGame.h"

// to make syntax Unreal friendly
using FText = std::string;
using int32 = int;

// function prototypes as outside a class
void PrintIntro();
FText GetValidGuess();
void PlayGame();
bool AskToPlayAgain();
void PrintGameSummary();

// intantiate a new game, which we re-use across plays
FBullCowGame BCGame;

// introduce the game
void PrintIntro()
{
	std::cout << "\nWelcome to Bulls and Cows, a fun word game." << std::endl;
	std::cout << std::endl;
	std::cout << "           }   {          ___  " << std::endl;
	std::cout << "           (o o)         (o o) " << std::endl;
	std::cout << "   /------- \\ /           \\ /--------\\  " << std::endl;
	std::cout << "  / | BULL | O             O|  COW  | \\ " << std::endl;
	std::cout << " *  |-,--- |                |-------|  * " << std::endl;
	std::cout << "    ^      ^                ^       ^    " << std::endl;
	std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
	std::cout << " letter isogram I'm thinking of?" << std::endl;
	std::cout << std::endl;

	return;
}

// loop continually until the user gives a valid guess
FText GetValidGuess()
{
	EGuessStatus Status = EGuessStatus::Invalid_Status;
	FText Guess{};

	do {
		int32 CuerrntTry = BCGame.GetCurrentTry();

		std::cout << "Try " << CuerrntTry << " of " << BCGame.GetMaxTries() << ". Enter your guess: ";
		std::getline(std::cin, Guess);

		// check status and give feedback
		Status = BCGame.CheckGuessValidity(Guess);

		switch (Status)
		{
		case EGuessStatus::Wrong_Length:
			std::cout << "Please enter a " << BCGame.GetHiddenWordLength() << " letter word." << std::endl;
			std::cout << std::endl;
			break;
		case EGuessStatus::Not_Isogram:
			std::cout << "Please enter a word without repeating letters." << std::endl;
			std::cout << std::endl;
			break;
		case EGuessStatus::Not_Lowercase:
			std::cout << "Please enter all lowercase letters." << std::endl;
			std::cout << std::endl;
			break;
		default:
			// assume the guess is valid
			break;
		}

	} while (Status != EGuessStatus::OK);		// keep looping until we get no errors

	return Guess;
}

void PlayGame()
{
	BCGame.Reset();
	
	int32 MaxTries = BCGame.GetMaxTries();

	// loop asking for guesses while the game
	// is NOT won and there are still tries remaining
	while (!BCGame.IsGameWon() && BCGame.GetCurrentTry() <= MaxTries)
	{
		FText Guess = GetValidGuess();

		// Submit valid guess to the game amd receive counts
		FBullCowCount BullCowCount = BCGame.SubmitValidGuess(Guess);

		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows = " << BullCowCount.Cows << std::endl;
		std::cout << std::endl;
	}

	PrintGameSummary();
	return;
}

bool AskToPlayAgain()
{
	FText Response {};

	std::cout << "Do you want to play again with the same hidden word? (y/n) ";
	std::getline(std::cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y');
}

void PrintGameSummary()
{
	if (BCGame.IsGameWon())
	{
		std::cout << "WELL DONE - YOU WIN!" << std::endl;
	}
	else
	{
		std::cout << "Better luck next time!" << std::endl;
	}
}

// the entry point for our application
int main()
{
	bool bPlayAgain {false};

	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();

	} while (bPlayAgain);

	std::cout << std::endl;
	return 0;
}
