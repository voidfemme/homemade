#include <iostream>
#include <string>
using namespace std;

void Hours(int hour){
	int moddedHour = hour % 10;
	string rusHour = "час";
	if ((hour >= 5) && (hour <= 19)){
		cout << hour << " " << rusHour << "ов";
	}
	else if(moddedHour == 1){
		cout << rusHour;
	}
	else if((moddedHour >= 2) && (moddedHour <= 4)){
		cout << hour << " " << rusHour << "а";
	}
	else if(moddedHour == 0){
		cout << hour << " " << rusHour << "ов";
	}
	else{
		cout << "ошибка!";
	}
	cout << " ";
}

void Minutes(int minute){
	int moddedMinutes = minute % 10;
	string rusMin = "минут";

	if ((minute >= 5) && (minute <= 19)){
		cout << minute << " " << rusMin;
	}
	else if (moddedMinutes == 1){
		cout << "одна" << " " << rusMin << "a";
	}
	else if ((moddedMinutes >= 2) && (moddedMinutes <= 4)){
		cout << minute << " "<< rusMin << "ы";
	}
	else if ((moddedMinutes >= 5) && (moddedMinutes <= 9)){
		cout << minute << " " << rusMin;
	}
	else if (moddedMinutes == 0){
		cout << minute << " " << rusMin;
	}
	else{
		cout << "ошибка!";
	}
}

int main(){
	int hour;
	int minute;
	string hourTime;
	string minuteTime;

	for(int i=0;i<20;i++){
		cout << "enter hour: ";
		cin >> hour;
		cout << "enter minute: ";
		cin >> minute;
		Hours(hour);
		Minutes(minute);
		cout << endl;
	};

}
