#include <stdio.h>

#include <iostream>

using namespace std;

int main(){
    cout << "Hello, welcome to Joel's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned?";


int numbers_of_rooms {0};
cin >> numbers_of_rooms;

const double price_per_room {32.5};
const double sales_tax {0.06};
const int estimate_expiry {30}; //days

cout << "\nEstimate for carpet cleaning service" << endl;
cout << "Number of rooms:$" << numbers_of_rooms << endl;
cout << "Price per room $" << price_per_room << endl;
cout << "Cost: $" << price_per_room * numbers_of_rooms << endl; 
cout << "Tax: $" << price_per_room* numbers_of_rooms * sales_tax << endl;
cout << "=============================" << endl;
cout << "Total estimate: $" << (price_per_room * numbers_of_rooms)+(price_per_room * numbers_of_rooms * sales_tax) << endl;
cout << "This estimate is valid for" << estimate_expiry << "days" << endl;




cout << endl;
return 0;
}