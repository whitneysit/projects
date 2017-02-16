/*
* You are given the following information, but you may prefer to do some research for yourself.
1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

*/


#include <iostream>
#include <vector> 

using namespace std; 

int main(){
	int daysInAMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
	int dayOfTheWeek = 2; //0-6 = Sunday-Saturday 1/01/1901 was a tuesday
	int currYear= 1901; //
	//int currMonth = 0; // 0-11 Jan-Dec
	int numOfSun = 0; 
	while (currYear != 2001){
		for (int j = 0; j < 12; j++){
			if (dayOfTheWeek == 0){
				numOfSun++; 
			}
			if ((j == 1) && (currYear%4==0) && !(currYear%400==0) ){
				for (int i = 0; i < 29; ++i){
					dayOfTheWeek++; 
					dayOfTheWeek = dayOfTheWeek%7; 
				}
			}
			else {
				for (int i = 0; i < daysInAMonth[j]; ++i){
					dayOfTheWeek++; 
					dayOfTheWeek = dayOfTheWeek%7; 
				}
			}

		}
		currYear++; 
	}
	cout << numOfSun << endl; 
	return 0; 
}


 