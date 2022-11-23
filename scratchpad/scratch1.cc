#include <iostream>
#include <iomanip>
#include <cstring>

bool Validate(std::string input_string)
{
    std::cout << "FirstBool\n";
    for(int i=0; i<input_string.size(); i++)
    {
        if(!isdigit(input_string[i])) {return false;}
        else {return true;}
    }
    return true;
}

bool Verify(std::string input_string)
{
    std::cout << "FirstBool\n";
    for(int i=0; i<input_string.size(); i++)
    {
        if(!isdigit(input_string[i])) {return true;}
    }
    return false;
}

bool Success()
{
    std::cout << "Success!" << std::endl;
    return true;
}

bool Failure()
{
    std::cout << "Failure!" << std::endl;
    return false;
}

std::string UserInput()
{
    std::string x = "";
    std::cout << "numbers divisible by both 3 and 4 are valid\n";
    std::cout << "enter x: ";
    std::cin >> x;
    return x;
}
int main()
{
    bool flag = false;
    while(flag == false)
    {
        if (Validate(UserInput()))
        {
            if(Verify(UserInput()))
            {
                flag = Success();
            }
        }
        else
        {
            flag = Failure();
        }

    }
    return 0;
}
