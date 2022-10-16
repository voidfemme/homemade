// Author:	Rose S. Proctor
// Assignment:	CS 162, Assignment One
// Description:	Prompts user to enter three songs, detailing each's album name, 
// 		artist name, song name, and duration. Stores each of these in a
// 		single custom datatype struct called "song". After entering 3
// 		songs, the user is then presented with a summary of their entries.
// Input:	song.album_name, song.artist_name, song.song_name, song.song_duration
// Output:	Welcome message, user prompt, 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct song {
	string album_name;
	string artist_name;
	string song_name;
	double song_duration;
};

void format_fun() {
	cout << setw(35) << setfill('-') << "" << endl;
}

// I'm unhappy that I can't use getline to populate these fields. Ideally, I'd like to be able to input albums and artists that contain spaces in the names.
void populate_song(song& gen_song) {
	cout << "Enter album name: ";
	cin >> gen_song.album_name;

	cout << "Enter artist name: ";
	cin >> gen_song.artist_name;

	cout << "Enter song name: ";
	cin >> gen_song.song_name;

	cout << "Enter song duration: ";
	cin >> gen_song.song_duration;
}

void print_song(song gen_song) {
	cout << "Album Name = " << gen_song.album_name << endl;
	cout << "Artist Name = " << gen_song.artist_name << endl;
	cout << "Song Name = " << gen_song.song_name << endl;
	cout << "Song duration = " << gen_song.song_duration << endl;
}

int main(){
	
	const int MAX_ARRAY_SIZE = 3;
	song playlist[MAX_ARRAY_SIZE];

	cout << "Welcome to my playlist maker!" << endl;

	for(int i=0; i < MAX_ARRAY_SIZE; i++){
		format_fun();
		populate_song(playlist[i]);
	}
	
	format_fun();
	cout << "Updated List of Songs" << endl;

	for (int i=0; i < MAX_ARRAY_SIZE; i++) {
		format_fun();
		print_song(playlist[i]);
	}
	
	format_fun();

	return 0;
}
