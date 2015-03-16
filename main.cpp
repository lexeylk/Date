#include <stdio.h>
#include <iostream>

class Data{
public:
	int d, m, y;
	Data(int day, int month, int year);
	bool check();
	void print();
	int return_days();



};

Data::Data(int day, int month, int year){
	d = day;
	m = month;
	y = year;
}

void Data::print(){
	std::cout << Data::d << "." << Data::m << "." << Data::y;
}

int Data::return_days(){
	if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) return 31;
	if ((m == 4) || (m == 6) || (m == 9) || (m == 11)) return 30;
	if (y % 4 == 0)  return 29; else return 28;
}

bool Data::check(){
	
	return 0;			
}

int main(){
	Data today(28, 2, 2012);
	//today.print();
	//std::cout << today.return_days();
	return 0;
}