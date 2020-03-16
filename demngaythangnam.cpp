#include <iostream>
using namespace std;
int main(){
	int day,year=0;
	cin >> day;
	while (day > 365){
		if ((day-365)>=0) year++;
		day- 365;
	}
	cout << year;
	
}
