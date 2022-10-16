#include <iostream>
#include <iomanip>
using namespace std;

void format_fun(){
	cout << setw(50) << setfill('-') << " " << endl;
}

struct linkNode{
	int value;
	linkNode *front;
};

void reverse_list(linkNode *current){

	if(current->front == nullptr){
		cout << current->value << " ";
	}
	else{
		reverse_list(current->front);
		cout << current->value << " ";
	}
}

int main(){
	int user_entry;
	linkNode *new_node = nullptr;
	linkNode *head = nullptr;
	linkNode *current = nullptr;

	format_fun();
	cout << "Enter value (-999 to quit): ";
	cin >> user_entry;

	while(user_entry != -999){
		new_node = new linkNode;
		new_node->value = user_entry;
		new_node->front = nullptr;

		if(head == nullptr){
			head = new_node;
			current = head;
		}
		else{
			current->front = new_node;
			current = new_node;
		}

		cout << "Enter value (-999 to quit): ";
		cin >> user_entry;
	}

	format_fun();
	cout << "Forward Linked List: " << endl;
	for(current = head;current != nullptr;current = current->front){
		cout << current->value << " ";
	}
	cout << endl;
	current = head;
	format_fun();
	cout << "Reverse Linked List: " << endl;
	reverse_list(current);
	cout << endl;
	format_fun();
	
	return 0;
}
