#include <iostream>

class ArrayInt
{
	protected:
		int length;
		char* p;
	public:
		ArrayInt();
		ArrayInt(int);
		void SetArraySize(int);
		void SetArrayValues();
		int GetArraySize();
		virtual void PrintArray();
};

/* ---------------------------------------------------------
ArrayInt::ArrayInt()
{
	length = 0;
}

ArrayInt::ArrayInt(int arr_sz)
{
	length = arr_sz;
	p = new char;
}

void ArrayInt::Set(int arr_sz)
{
	std::cout << "Set values for ArrayInt: ";
	for(int i=0; i<arr_sz; i++)
	{
		std::cin >> p[i];
	}
}
void ArrayInt::Get(int arr_sz)
{
	for(int i=0; i<length; i++)
	{
		std::cout << p[i];
	}
}

// ----------------------------------------------------------

int main()
{
	ArrayInt arr_one(8);
	arr_one.Set(8);
	arr_one.Get(8);
	return 0;
} */
