// Author:	Rose S. Proctor
// Assignment:	CS 162, Assignment One
// Description:	Prompts user to make a playlist of user-defined size, detailing 
// 		each's album name, artist name, song name, and duration. These 
// 		songs are stored in a dynamic array. After entering the songs, 
// 		the user is then presented with summary of their entries.
// Input:	arr_sz song.album_name, song.artist_name, song.song_name, song.song_duration
// Output:	Welcome message, user prompt, 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void format_fun() {
	cout << setw(35) << setfill('-') << "" << endl;
}

struct song {
	string album_name;
	string artist_name;
	string song_name;
	double song_duration;
};

song populate_song(song gen_song) {
	cout << "Enter album name: ";
	cin >> gen_song.album_name;
	cout << "Enter artist name: ";
	cin >> gen_song.artist_name;
	cout << "Enter song name: ";
	cin >> gen_song.song_name;
	cout << "Enter song duration: ";
	cin >> gen_song.song_duration;
	return gen_song;
}

void print_song(song gen_song) {
	cout << "Album Name = " << gen_song.album_name << endl;
	cout << "Artist Name = " << gen_song.artist_name << endl;
	cout << "Song Name = " << gen_song.song_name << endl;
	cout << "Song duration = " << gen_song.song_duration << endl;
}

void populate_array(song* p, int arr_sz){
	song placeholder;
	for(int i=0;i<arr_sz;i++){
		p[i] = populate_song(p[i]);
		format_fun();
	}
}

void print_array(song* p, int arr_sz){
	for(int i=0;i<arr_sz;i++){
		print_song(p[i]);
		format_fun();
	}
	cout << endl;
}

int main(){
	song* p = nullptr;
	int dy_arr_sz = 0;

	format_fun();
	cout << "Let's make a playlist!" << endl;
	cout << "How many songs would you like to include?: ";
	cin >> dy_arr_sz;
	format_fun();

	p = new song[dy_arr_sz];
	populate_array(p,dy_arr_sz);

	cout << "Updated List of Albums" << endl;
	format_fun();
	print_array(p, dy_arr_sz);

	return 0;
}
