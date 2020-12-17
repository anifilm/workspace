#include "FBullCowGame.h"
#include <map>

// to make syntax Unreal friendly
#define TMap std::map
using int32 = int;

FBullCowGame::FBullCowGame() { Reset(); }	// default constructor

int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

int32 FBullCowGame::GetHiddenWordLength() const { return MyHiddenWord.length(); }

bool FBullCowGame::IsGameWon() const { return bGameIsWon; }

int32 FBullCowGame::GetMaxTries() const
{
    TMap<int32, int32> WordLengthToMaxTries{ {3, 4}, {4, 5}, {5, 6}, {6, 7}, {7, 8} };
    return WordLengthToMaxTries[MyHiddenWord.length()];
}

bool FBullCowGame::IsIsogram(FString Word) const
{
    if (Word.length() <= 1) { return true; }

    TMap<char, bool> LetterSeen;
    for (auto Letter : Word)
    {
        Letter = tolower(Letter);
        if (LetterSeen[Letter])
        {
            return false;
        }
        else
        {
            LetterSeen[Letter] = true;
        }
    }
    return true;
}

bool FBullCowGame::IsLowercase(FString Word) const
{
    for (auto Letter : Word)
    {
        if (!islower(Letter))
        {
            return false;
        }
    }
    return true;
}

void FBullCowGame::Reset()
{
    //const int32 MAX_TRIES = 5;
    //MyMaxTries = MAX_TRIES;

    const FString HIDDEN_WORD = "planet";	// this MUST be an isogram
    MyHiddenWord = HIDDEN_WORD;

    MyCurrentTry = 1;
    bGameIsWon = false;
}

EGuessStatus FBullCowGame::CheckGuessValidity(FString Guess) const
{
    if (!IsIsogram(Guess))		// if the guess isn't an isogram
    {
        return EGuessStatus::Not_Isogram;
    }
    else if (!IsLowercase(Guess))		// if the guess isn't all lowercase
    {
        return EGuessStatus::Not_Lowercase;
    }
    else if (Guess.length() != GetHiddenWordLength())		// if the guess length is wrong
    {
        return EGuessStatus::Wrong_Length;
    }
    else
    {
        return EGuessStatus::OK;
    }
}

// receives a VALID guess, increments turns and returns count
FBullCowCount FBullCowGame::SubmitValidGuess(FString Guess)
{
    MyCurrentTry++;

    FBullCowCount BullCowCount;
    int32 WordLength = MyHiddenWord.length();	// assuming same length as guess

    // loop through all letters in the hidden word
    for (int32 MHWChar = 0; MHWChar < WordLength; MHWChar++)
    {
        // compare letters against the guess
        for (int32 GChar = 0; GChar < WordLength; GChar++)
        {
            // if they match then
            if (Guess[MHWChar] == MyHiddenWord[GChar])
            {
                if (MHWChar == GChar)			// if they're in the same place
                {
                    BullCowCount.Bulls++;		// increment bulls
                }
                else
                {
                    BullCowCount.Cows++;		// increment cows
                }
            }
        }
    }

    if (BullCowCount.Bulls == WordLength)
    {
        bGameIsWon = true;
    }
    else
    {
        bGameIsWon = false;
    }

    return BullCowCount;
}
