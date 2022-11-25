#include <iostream>
#include <iomanip>
#include <string>

/* by voidfemme
*  Design Goals:
*   1. make a looping menu that allows you to create and view arrays at will
*   2. The array that accesses the dynamic arrays doesn't need to be static,
*      since the goal of this is simply to become more comfortable with arrays
*      and with creating a nice UX. Not anything too fancy tho.
*   3. This means that the arrays will be stored in another array.
*   4. I want to carry over the tools I created in ./array_manip.cc and allow
*      for manipulating any array with those methods
*/

void formatFunction()
{
	std::cout << std::setw(40) << std:: setfill('-') << "" << std::endl;
}

int inputNewArray(char* p)
{
    char userchar;
    int arr_sz = 0;
    formatFunction();
    std::cout << "inputNewArray() Successfully chosen.\n";
    formatFunction();
    std::cout << "Input: ";
    while(userchar != ';')
    {
        std::cin >> userchar;
        if(userchar == '\\')
        {
            std::cin >> userchar;
            if(userchar == 's') { userchar = ' '; }
        }
        p[arr_sz] = userchar;
        arr_sz++;
    }
    arr_sz--; // trim off ending symbol ';'
    return arr_sz;

    std::cin >> userchar;
    std::cout << "userchar = " << userchar << std::endl;
    formatFunction();
}

void printArray(char* p, int arr_sz)
{
    formatFunction();
    std::cout << "printArray() Successfully chosen.\n";
    formatFunction();
    for(int i=0;i<arr_sz;i++)
    {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;
    formatFunction();
}

void accessElement(char* p, int arr_sz)
{
    int index = 0;
    formatFunction();
    std::cout << "Element number: ";
    std::cin >> index;
    if(index > arr_sz)
    {
        while(index > arr_sz)
        {
            std::cout << "error: element does not exist. Please try again: ";
            std::cin >> index;
        }
    }
    std::cout << "element # " << index << " = " << p[index - 1] << "." << std::endl;
    formatFunction();
}

void editElement(char* p, int arr_sz)
{
    formatFunction();
    std::cout << "Successful Invocation of editElement()\n";
    formatFunction();
    int index = 0;
    std::cout << "Access element # ";
    std::cin >> index;
    std::cout << "Replace with: ";
    std::cin >> p[index - 1];
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    // Initialize arrays
    char* cool_array[10];
    char* p = new char;
    int p_arr_sz = 0;
    char user_input;

    // Set up my main loop and menu
    int selection = 0;
    std::string description = "<Placeholder text";
    formatFunction();
    // This menu might be better as a sub-menu for editing each array.
    //  - I want the user to be able to select an array from the main menu, and
    //    then be able to input, print, or manipulate the array
    while(selection != 9)
    {
        std::cout << "Enter 1: Input array\n";
        std::cout << "Enter 2: Print array\n";
        std::cout << "Enter 3: Access nth element\n";
        std::cout << "Enter 4: Edit nth element\n";
        std::cout << "Enter 5: Quit\n";
        std::cout << "Selection: ";
        std::cin >> selection;
        switch(selection)
        {
            case 1:
                p_arr_sz = inputNewArray(p);
                break;
            case 2:
                printArray(p,p_arr_sz);
                break;
            case 3:
                accessElement(p,p_arr_sz);
                break;
            case 4:
                editElement(p,p_arr_sz);
                break;
            default:
                selection = 9;
                break;
        }
    }

	return 0;
}
