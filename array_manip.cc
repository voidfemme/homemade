#include <iostream>

void printArray(char* p, int arr_sz, bool dir, int multiplier)
{
    int inversion = 0;
    int x = 0;
    int index = 0;
    if(dir) x = -1;
    for(int i=0; i<arr_sz; i++)
    {
        inversion = x * ((2 * i) - arr_sz + 1);
        index = (multiplier * (i + inversion)) % arr_sz;
        std::cout << p[index]<< " ";
    }
}

int main()
{
    int lines = 0;
    int multiplier = 0;
    int arr_sz = 0;
    char* p= new char;
    char userchar = ' ';
    int flag = 0;
    bool dir = false;

    std::cout << "input: ";
    while(userchar != ';')
    {
        std::cin >> userchar;
        if(userchar == '\\')
        {
            std::cin >> userchar;
            if(userchar == 's')
            {
                userchar = ' ';
            }

        }
        p[arr_sz] = userchar;
        arr_sz++;
    }
    arr_sz--; // cuts ";" off the end of the array
    std::cout << "number of lines: ";
    std::cin >> lines;
    std::cout << "enter multiplier: ";
    std::cin >> multiplier;
    std::cout << "reverse?";
    std::cin >> flag;
    for(int i=0; i<lines; i++)
    {
        if(flag == 0)
        {
            printArray(p, arr_sz, false, multiplier);
        }
        else
        {
            printArray(p,arr_sz,true,multiplier);
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}

/* Design Goals:
 *! Include spaces in the input function
 *  will use dynamic arrays
 *  can print an array backwards
 *  print every nth element
 *  print every nth element backwards
 *  print the head, tail, last, and any specific element
 *  control output
 *   specify number of lines and character length
 */

// int InputArr(char* p)
// {
//     int counter = 0;
//     char userchar = ' ';
//     std::cout << "input: ";
//     while(userchar != ';')
//     {
//         std::cin >> userchar;
//         if(userchar == '\\')
//         {
//             std::cin >> userchar;
//             if(userchar == 's')
//             {
//                 userchar = ' ';
//             }
//
//         }
//         p[counter] = userchar;
//         counter++;
//     }
//     counter--; // cuts ";" off the end of the array
//     return counter;
// }

