// A limerick is:
// 	5 lines
// 	AABBA rhyme scheme
// 	8-9 syllables
// 	8-9 syllables
// 	5 syllables
// 	5-6 syllables
// 	8-10 syllables
//

#include <iostream>
#include <iomanip>
using namespace std;

void FormatFun(){
	std::cout << std::setw(60) << std::setfill('-') << "" << std::endl;
}

void PossibleSyllablePop(string* syllable){

}

void RhymePop(string* syllable){
	std::cout << "Enter two rhyming words: ";
	for(int i=0;i<2;i++){
		std::cin >> syllable[i];
	}
	std::cout << std::endl;
	FormatFun();
	std::cout << "your rhymes are " << syllable[0] << " and " << syllable[1] << std::endl;
}

void ArrayPop(string* syllable,int arr_sz){
	// populates array starting at index=2, because I don't want to overwrite my
	//  rhymes in index=1,2.
	for(int i=2;i<arr_sz;i++){
		std::cout << "Enter Element #" << i << ": ";
		std::cin >> syllable[i]; 
	}
	// This is where I have an index of nonsense syllables
	char consonants[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
	char vowels[5] = {'a','e','i','o','u'};

	for(int i=0)
	
	std::cout << std::endl;
	FormatFun();
}

void ArrayPrint(string* syllable,int arr_sz){
	std::cout << "Array Values = ";
	for(int i=0;i<arr_sz;i++){
		std::cout << syllable[i] << ", ";
	}
	std::cout << std::endl;
	FormatFun();
}

int main(){
	string* syllable = nullptr;
	int arr_sz;

	FormatFun();
	std::cout << "enter the number of syllables: ";
	std::cin >> arr_sz;
	FormatFun();

	syllable = new string[arr_sz];
	RhymePop(syllable);
	ArrayPop(syllable,arr_sz);
	ArrayPrint(syllable,arr_sz);
	std::cout << std::endl;
	return 0;
}
