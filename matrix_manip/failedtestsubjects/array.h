#pragma once
#include <iostream>
using namespace std;

class DynamicArray{
	// Private classes are only accessible from within other members of the same class (or their "friends")
	private:
		int* p = nullptr;
		int arr_sz_;
	// Protected classes are accessible from other members of the same class (or from their "friends"), but also from members of their derived classes.
	// public members are accessible from anwhere the object is visible
	protected:
	public:
		Array();
		Array(int);
		void SetArray(int);
		void PrintArray(int);
};
