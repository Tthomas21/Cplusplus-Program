//============================================================================
// Name        : Chadda Tech Clock
// Author      : Tyler Thomas
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Project 1, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <string>
#include<iomanip>
using namespace std;

void DisplayMenu(){
	cout << "**********************" << endl;
	cout << "** 1- Display Time  **" << endl;
	cout << "** 2- Add Hour      **" << endl;
	cout << "** 3- Add Minute    **" << endl;
	cout << "** 4- Add Second    **" << endl;
	cout << "** 5- Exit Menu     **" << endl;
	cout << "**********************"<< endl;
}
void DisplayTime(int hh, int mm, int ss){
	cout << setw(2) << setfill('0');
	cout << "**********************" << endl;
	cout << "*  12-Hour Clock  *" << endl;
	cout <<"*     "<< setw(2) << setfill('0') << hh << ":"
			<< setw(2) << setfill('0') << mm << ":"
			<< setw(2) << setfill('0') << ss << "    *" << endl;
	cout << "**********************" << endl;

}
void DisplayTime24(int hh, int mm, int ss){
	cout << setw(2) << setfill('0');
	cout << "**********************" << endl;
	cout << "*  24-Hour Clock  *" << endl;
	cout <<"*     "<< setw(2) << setfill('0') << hh << ":"
			<< setw(2) << setfill('0') << mm << ":"
			<< setw(2) << setfill('0') << ss << "    *" << endl;
	cout << "**********************" << endl;

}
// Adds hour to 12 clock
void AddHour(int* hh){
	if(*hh < 12){
		*hh = *hh+1;
	} else if (*hh >= 12){
		*hh = 1 % 12;
	}
}
// Adds minute to 12 clock
void AddMinute(int* mm){
	if(*mm < 59){
		*mm = *mm +1;
	}
	else if (*mm >= 59){
		*mm = (*mm + 1) % 60;
	}
}
// Adds second to 12 clock
void AddSecond(int* ss){
	if(*ss < 59){
		*ss = *ss +1;
	}
	else if (*ss >= 59){
		*ss = (*ss + 1) % 60;
	}
}
// Adds hour to 24 clock
void AddHour24(int* hh){
	if(*hh < 23){
		*hh = *hh+1;
	} else if (*hh >= 23){
		*hh = (*hh+1) % 24;
	}
}
// Adds minute to 24 clock
void AddMinute24(int* mm){
	if(*mm < 59){
		*mm = *mm +1;
	}
	else if (*mm >= 59){
		*mm = (*mm + 1) % 60;
	}

}
// Adds second to 24 clock
void AddSecond24(int* ss){

	if(*ss < 59){
		*ss = *ss +1;
	}
	else if (*ss >= 59){
		*ss = (*ss + 1) % 60;
	}

}
int main() {

	int choice = 0;
	//12 hour time variables
	int h, m, s;
	h = 12;
	m = 59;
	s = 59;
	//24 hour time variables
	int h24, s24, m24;
	h24=23;
	m24=59;
	s24=59;
	/*
	 * Display Menu
	 * 1. Display Time in 12 & 24 hour format
	 * 2. Add Hour
	 * 3. Add Minute
	 * 4. Add Second
	 * 5. Exit
	 */
     while(true){
		system("cls");
		DisplayMenu();
		cout << "Enter your choice!" << endl;
		cin >> choice;
		if(choice == 5){
			break;
		}
		if (choice == 1){
			DisplayTime(h, m, s);
			DisplayTime24(h24, m24, s24);
			system("pause");
		}// Calls add Hour function
		else if (choice == 2){
			AddHour(&h);
			AddHour24(&h24);
		}// Calls add minute functions
		else if (choice == 3){
			AddMinute(&m);
			AddMinute24(&m24);
		}// Calls add second Functions
		else if (choice == 4){
			AddSecond(&s);
			AddSecond24(&s24);
		} else {
			cout << "Incorrect choice please try again" << endl;
		}
	}

	return 0;
}
