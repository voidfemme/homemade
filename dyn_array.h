#pragma once
#include <iostream>
#include <iomanip>

class DynArray
{
    protected:
        char* p = new char;
        int arr_sz = 0;
    public:
        DynArray(char*);
        // DynArray(char*,bool);
        // DynArray(char*,bool,int);
        // DynArray(char*,bool,int,int);

        void SetDynArray(char*,int);
        // void Print(char*,int);
        // void Print(char*,int,bool);
        // void Print(char*,int,bool,int);
        // void Print(char*,int,bool,int,int);
        void PrintData();
};
