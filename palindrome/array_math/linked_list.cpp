#include <iostream>
#include <iomanip>
#include <string>

void FormatFun()
{
	std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
}

struct LinkNode
{
	string value_name;
	int user_entry;
	LinkNode* front;
};

void PrintRecusively(LinkNode* current)
{
	if(current->front == nullptr)
	{
		std::cout << current->value_name << ", " << current->user_entry << std::endl;
	}
	else
	{
		PrintRecusively(current->front);
		std::cout << current->value_name << ", " << current->user_entry << std::endl;
	}
}

int main()
{
	int user_entry = 0;
	LinkNode* new_node = nullptr;
	LinkNode* head = nullptr;
	LinkNode* current = nullptr;
	LinkNode* front = nullptr;
	
	FormatFun();
	std::cout << "Enter Value Name: ";
	std::cin >> new_node->value_name;

	new_node->user_entry = user_entry;
	new_node->front = nullptr;

	// if head is "empty," then current overwrites with 'head'. Otherwise, current writes to a new node. This way we won't just keep overwriting the same node.
	//
	//  the '->' operator means:wq
	//
}
