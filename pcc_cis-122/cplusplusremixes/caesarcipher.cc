#include <iostream>
#include <iomanip>

/* author: voidfemme
 *
 * Program Description: A Caesar Cipher Generator
 */

/* 1. prompt for text
 * 2. save that text to a character array
 * 3. prompt for offset
 * 4. print the whole string of text offset by x times
 */

int main()
{
    char textstring[100];
    std::cout << "Enter text: ";
    // Use cin.get(str, <array-length>) in order to capture a line of text including spaces
    std::cin.get(textstring, 100);
    std::cout << textstring[4];
    return 0;
}
