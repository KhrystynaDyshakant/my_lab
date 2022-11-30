#include "Pharmacy.h"
#include <iostream>

using namespace std;

int main()
{
    Pharmacy x(2);
    x.add();
    x.print();
    x.discount();
    x.print();
    x.printCheapiest();
    string d;
    cout << "\nCurrent date(mm/dd/yyyy):";
    cin >> d;
    x.check(d);
    x.print();
    return 0;
}

