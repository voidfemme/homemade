#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void format_fun(){
	cout << setw(15) << setfill('#') << "" << endl;
}

struct linkNode{
	string value_name;
	int user_entry;
	linkNode* front;
};

void print_recursively(linkNode* current){
	
	if(current->front == nullptr){
		cout << current->value_name << ", ";
		cout << current->user_entry << endl;
	}
	else{
		print_recursively(current->front);
		cout << current->value_name << ", ";
		cout << current->user_entry << endl;
	}
}

int main(){
	int user_entry = 0;
	linkNode* new_node = nullptr;
	linkNode* head = nullptr;
	linkNode* current = nullptr;
	linkNode* front = nullptr;
	// bool flag = true;

	format_fun();
	cout << "Enter value ID and -999 to exit: ";
	cin >> user_entry;

	while(user_entry != -999){
		new_node = new linkNode;
		cout << "Enter value name: ";
		cin >> new_node->value_name;
		
		new_node->user_entry = user_entry;
		new_node->front = nullptr;
	
		// if head is "empty," then current overwrites 'head'. Otherwise, current writes to a new node. This way, we won't just keep overwriting the same node.
		if(head == nullptr){
			head = new_node;
			current = head;
		}
		else{
			current->front = new_node;
			current = new_node;
		}
		
		cout << "Enter value ID and -999 to exit: ";
		cin >> user_entry;
	}

	format_fun();
	cout << "Elements of the Linked List: " << endl;
	format_fun();
	// instead of using 'i' as  a counter, we just iterate through our list, until we hit the nullptr which acts as a bookend.
	for(current = head; current != nullptr; current = current->front){
		cout << current->value_name << ", ";
		cout << current->user_entry << endl;
	}
	
	format_fun();
	current = head;
	cout << "Elements of the reverse Linked List: " << endl;
	print_recursively(current);
	format_fun();
	
	return 0;
}
