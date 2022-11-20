#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void format_fun(){
	cout << setw(50) << setfill('-') << "" << endl;
}

struct bookshelf{
	string name_of_book;
	bookshelf* next_shelf;
};

int main(){

	bookshelf* new_bookshelf = nullptr;
	bookshelf* head = nullptr;
	bookshelf* current = nullptr;
	string title_entry = "";
	bool quit = true;
	bool flag = true;

	format_fun();
	cout << "My little library." << endl;
	format_fun();
	
	while(quit){
		cout << "Enter book title: ";
		cin >> title_entry;

		new_bookshelf = new bookshelf;
		new_bookshelf->name_of_book = title_entry;
		new_bookshelf->next_shelf = head;

		if(head == nullptr){
			head = new_bookshelf;
			current = head;
		}
		else{
			current->next_shelf = new_bookshelf;
			current = new_bookshelf;
		}
		cout << "2. Continue? (1 for yes, 0 for no) ";
		cin >> quit;


	}

	current = head;

	cout << "Circular Linked List Elements = ";

	while(flag){
		cout << current->name_of_book << " ";
		current = current->next_shelf;

		if(current->next_shelf == head){
			cout << current->name_of_book << " ";
			cout << current->next_shelf->name_of_book;
			flag = false;
		}
	}
	cout << endl;

	return 0;
}
