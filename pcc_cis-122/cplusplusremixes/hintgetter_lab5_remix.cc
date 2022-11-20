#include <iostream>
#include <iomanip>
#include <cstring>


void ValidateAnswer(input_string, bool c)
{
	while()
	{
		if(IsDigit(input_string)) { return true; }
		else { return false; }
	}
}

bool IsDigit(string guess)
{
	for(int i=0;i<guess.size();i++)
	{
		// if any member of the string `guess` is not a digit, return false.
		if(!IsDigit(guess[i])) {return false}
	}
	else
	{
		return true;
	}
}

void CycleHints(string guess)
{
}

int InputGuess()
{
	string guess;
	std::cout << "Enter 15: ";
	std::cin >> guess;
	return guess;
}

int main()
{
	// Get input;
	string guess = "";
	std::cout << "Enter 15: ";
	std::cin >> guess;
	// correct answer should be first in logic, in case the correct answer is given on the first try

	// I need a basic loop to both check for a valid answer and immediately afterwards, for the correct answer
	while()
	{
		if(ValidateAnswer() && guess == "15")
		{
			std::cout << "Correct answer, thank you";
			false;
		}
		else{
			std::cout << "Incorrect answer, please try again: ";
			std::cin >> guess;
			CycleHints(counter);
			counter++;
		}
	}
	return 0;
}
