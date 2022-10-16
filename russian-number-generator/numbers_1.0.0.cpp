#include <iostream>
#include <string>
#include "/home/rsp/Programs/russian-number-generator/CLI11.hpp"

using namespace std;

string Hours(int hour){
	int modded_hour = hour % 10;
	if ((hour >= 5) && (hour <= 19)){
		// genitive plural
		return "часов";
	}
	else if(modded_hour == 1){
		// nominative singular
		return "час";
	}
	else if((modded_hour >= 2) && (modded_hour <= 4)){
		// genitive singular
		return "часа";
	}
	else if((hour >= 5) && (hour <= 20) || (modded_hour == 0)){
		// genitive plural
		return "часов";
	}
	else{
		// error statement:
		return "ошибка!";
	}
}

string Minutes(int minute){
	int modded_minutes = minute % 10;
	if (minute == 0){
		return "";
	}
	else if ((minute >= 5) && (minute <= 19)){
		// genitive plural
		return "минут";
	}
	else if (modded_minutes == 1){
		// nominative singular
		return "минута";
	}
	else if ((modded_minutes >= 2) && (modded_minutes <= 4)){
		// genitive singular
		return "минуты";
	}
	else if ((modded_minutes >= 5) && (modded_minutes <= 9)){
		// genitive plural
		return "минут";
	}
	else if (((minute >= 5) && (minute <= 20)) || (modded_minutes == 0)){
		// genitive plural
		return "минут";
	}
	else{
		// error statement:
		return "ошибка!";
	}
}

// string RussianNumber(string hr_or_min, int a){
// 	// Create dictionary of numbers
// 	int one_thru_ten[9] = {"один", "две", "три", "четыре", "пять", "шесть", "семь", "восем", "девять"};
// 	int feminine_variants[2] = { "одна", "два"};
// 	int tens[6] = {"ноль", "десять", "двадцать", "тридцать", "сорок", "пятьдесять"};
// 	int teens[9] = {"н", "адцать"}
// 
// 	if((hr_or_min == "часа") && (a < 8)){
// 		return one_thru_ten[a];
// 	}
// 	else if((hr_or_min == "минуты") && (a < 2){
// 		return feminine_variants[a];
// 	}
// 	else{
// 		return 
// 	}
// }

void Autogen(){
	for(int i=0;i<24;i++){
		for (int j=0;j<60;j++){
			cout << i << " " << Hours(i) << " - ";
			cout << j << " " << Minutes(j) << endl;
		}
	}
}

int main(int argc, char *argv[]){

	int hour = 0;
	int minute = 0;
	string hourTime = "";
	string minuteTime = "";

//--------------------------------------
// start handling command line args
	CLI::App app;
	bool autogen{false};
	app.add_flag("-a", autogen, "autogen");
	bool spelled_out{false};
	app.add_flag("-s", spelled_out, "Spell out the numbers");
	int cli_hour{0};
	app.add_option("-c", cli_hour, "hour");
	int cli_minute{0};
	app.add_option("-m", cli_minute, "minute");
	CLI11_PARSE(app,argc,argv);
//--------------------------------------

	if(autogen){
		Autogen();
		return 0;
	}

	hourTime = Hours(cli_hour);
	minuteTime = Minutes(cli_minute);
	cout << cli_hour << " " << hourTime << " : " << cli_minute << " " << minuteTime << "," << endl;

	return 0;

}
