#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

ifstream inp; //data file reading and writing operators
ofstream outp;

char c[30][21]; //variable for staring screen particles (pixels)
int n[30][21]; //variable for checking
int highscore;
int contr,tuk=0,score=0,t=0,bt=0,birdx=0,birdy=0; // various variables for certain operations
bool err; // boolean for error detection

void game();
void screen();
void pipes();
void bird();
bool gameover();
void checkscore();
void help();
void menu();
void endgame();
void credits();

int main(){
	srand(time(0));	//seeding random number gen, we will need it later;

	inp.open("/Program Files/")
}
