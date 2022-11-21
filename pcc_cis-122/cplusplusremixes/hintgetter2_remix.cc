#include <iostream>
#include <string>

std::string UserInput()
{
    std::string user_input;
    std::cout << "Please enter a number: ";
    std::cin >> user_input;
    return user_input;
}

bool Validate(std::string input_string)
{
    for(int i=0; i<input_string.size(); i++)
    {
        if(!isdigit(input_string[i]))
        {
            std::cout << "Failure! not a number." << std::endl;
            return false;
        }
    }
    return true;
}

bool VerifyAns(std::string input_string)
{
    if(input_string == "8")
    {
        std::cout << "Success!" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Failure! Incorrect Answer." << std::endl;
        CycleHints(incorrect_answer_counter);
        return false;
    }
}

void CycleHints(int guess_num)
{
    switch (guess_num % 3)
    {
        case 0:
            std::cout << "hint 1" << std::endl;
            break;
        case 1:
            std::cout << "hint 2" << std::endl;
            break;
        case 2:
            std::cout << "hint 3" << std::endl;
            break;
    }
}
int main()
{
    bool flag = false;
    std::string user_input;
    int incorrect_answer_counter = 0;
    while(flag == false)
    {
        user_input = UserInput();
        flag = Validate(user_input);
        if(flag == true)
        {
            flag = VerifyAns(user_input);
        }
        else
        {
            flag = false;
            incorrect_answer_counter++;
        }
    }
    return 0;
}
