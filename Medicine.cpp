#include "Medicine.h"
#include <iostream>

using namespace std;

void Medicine::printMedicine() {
	cout << "\n" << toStrObj();
}
string Medicine::toStrObj() {
	return "{Name:" + name + "\tQuantity:" + to_string(quantity) + "\tPrice:" + to_string(price) + "\tPrescriptionNeed:" + (isPrescriptionNeeded ? "y" : "n") + "\tDate:" + date + "}";
}
void Medicine::input() {
	cout << "Name:";
	cin >> name; 
	cout << "Quantity:";
	cin >> quantity;
	cout << "Price:";
	cin >> price;
	cout << "PrescriptionNeed(y/n):";
	char tmp;
	cin >> tmp;
	(tmp == 'y') ? isPrescriptionNeeded = true : isPrescriptionNeeded = false;
	cout << "Date(mm/dd/yyyy):";
	cin >> date;
}