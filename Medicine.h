#pragma once
#include <string>

using namespace std;

class Medicine
{
private:
	float price;
	int quantity;
	string name;
	bool is_prescription_needed;
	string date;
public:
	Medicine() {
		input();
	}
	Medicine(float price, int quantity, string name, bool t, string date) {
		set_price(price);
		set_quantity(quantity);
		set_name(name);
		set_is_prescription_needed(t);
		set_date(date);
	};
	

