#include <iostream>
#include <string>

string UserInput(string guess)
{
	string guess = "";
	std::cout << "Enter 15: ";
	std::cin >> guess;
    return guess;
}

bool IsDigit(sting input_string)
{
    for(int i=0; i<input_string.size();i++)
    {
        if(!IsDigit(input_string[i])) {return false}
    }
    else {return true}
}

bool InputValidate(string input_string)
{
    while()
    {
        if(IsDigit(input_string)) {return true}
        else {return false}
    }
}

int main()
{
    bool flag = false;

    while(flag == false)
    {
        if(InputVerify(guess) == true || InputValidate(guess) == true)
        {
            guess = UserInput();
        }
    }
	// if (verify input)
	// 	{ return true }
	// if (verify answer)
	// 	{return true}

}

/* if input
 * 	A. Verify input
 * Verify input
 * 	A. input = not an int; return to line 26
 * 	B. input = int; continue
 * Verify answer
 * 	A. input = incorrect; return to line 26
 * 	B. input = correct; continue
 */
