#include <dyn_array.h>

DynArray::DynArray()
{
    char userchar;
    char* p = new char;
    std::cout << "Input array...\n(backslash s = ' ', ';' denotes the end ";
    std::cout << "of the array.\n> ";
    while(userchar != ';')
    {
        std::cin >> userchar;
        if(userchar == '\\')
        {
            std::cin >> userchar;
            if(userchar == 's' { userchar = ' ' }
        }
        p[arr_sz] = userchar;
        arr_sz++;
        }
}

void DynArray::PrintData(char* p, int arr_sz)
{
    for(int i=0;i<arr_sz;i++)
    {
        std::cout << p[arr_sz];
    }
    std::cout << std::endl;
}
