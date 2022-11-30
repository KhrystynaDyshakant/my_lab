#pragma once
#include <string>

using namespace std;

class Medicine
{
private:
	float price;
	int quantity;
	string name;
	bool isPrescriptionNeeded;
	string date;
public:
	Medicine() {
		input();
	}
	Medicine(float price, int quantity, string name, bool t, string date) {
		setPrice(price);
		setQuantity(quantity);
		setName(name);
		setIsPrescriptionNeeded(t);
		setDate(date);
	}
	void setPrice(float price) { this->price = price; }
	void setQuantity(int quantity) { this->quantity = quantity; }
		 
	void setName(string name) { this->name = name; }
	void setIsPrescriptionNeeded(bool t) { this->isPrescriptionNeeded = t; }
	void setDate(string date) { this->date = date; }
	float getPrice() { return price; }
	int getQuantity() { return quantity; }
	string getName() { return name; }
	bool getIsPrescriptionNeeded() { return isPrescriptionNeeded; }
	string getDate() { return date; }

	void input();
	void printMedicine();
	string toStrObj();
};

