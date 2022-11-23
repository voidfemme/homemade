#include <iostream>

// goal is to find a way to print the array backward by factoring out -1 from the algorithm
int main()
{
    int arr_sz = 10;
    int array[arr_sz] = {0,1,2,3,4,5,6,7,8,9};
    int _rev = -1;
    for(int i=0;i<arr_sz; i++)
    {
        std::cout << array[i * _rev - _rev * (1 - arr_sz)] << " ";
    }
    std::cout << std::endl;
    return 0;
}

/* arr_sz - i - 1
 *
 * i - 2i = -i
 *
 *
 * i - 2i + arr_sz - 1
