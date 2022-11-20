#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void format_fun(){
	cout << setw(30) << setfill('-') << "" << endl;
}

struct bitcoin_block{
	int cash_amount;
};

struct bitcoin_node {
	bitcoin_block cash_value;
	int pin;
};


int main(){

	bitcoin_node new_node;
	bitcoin_block new_blockchain_module;
	// What is a "bitcoin module"? What is a node?
	
	int num_of_bitcoins = 0;
	int bitcoin_value = 40000;

	format_fun();
	cout << "Struct Example" << endl;
	format_fun();

	cout << "How many bitcoins do you have? ";
	cin >>  num_of_bitcoins;

	// new_node.cash_value is datatype bitcoin_block
	// new_blockchain_module is also datatype bitcoin_block
	// new_node.cash_value = new_blockchain_module;	
	
	//This statement assigns the bitcoin_block's cash_amount with the total amount of bitcoin value.
	new_blockchain_module.cash_amount = num_of_bitcoins * bitcoin_value;
	cout << "Bitcoin Blockchain Value = " << new_blockchain_module.cash_amount << endl;





	return 0;
}
