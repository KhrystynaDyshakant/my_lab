#include "Medicine.h"
#include <iostream>

using namespace std;

void Medicine::print_Medicine() {
	cout << "\n" << to_Str_Obj();
}
string Medicine::to_Str_Obj() {
	return "{Name:" + name + "\tQuantity:" + to_string(quantity) + "\tPrice:" + to_string(price) + "\tPrescriptionNeed:" + (isPrescriptionNeeded ? "y" : "n") + "\tDate:" + date + "}";
}
void set_price(float price) { this->price = price; }
void set_quantity(int quantity) { this->quantity = quantity; }

void set_name(string name) { this->name = name; }
void set_is_prescription_needed(bool t) { this->is_prescription_needed = t; }
void set_date(string date) { this->date = date; }
float get_price() { return price; }
int get_quantity() { return quantity; }
string get_name() { return name; }
bool get_is_prescription_needed() { return is_prescription_needed; }
string get_date() { return date; }

void input();
void print_Medicine();
string to_Str_Obj();
};
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
	(tmp == 'y') ? is_prescription_needed = true : is_prescription_needed = false;
	cout << "Date(mm/dd/yyyy):";
	cin >> date;
}