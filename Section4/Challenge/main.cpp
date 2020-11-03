#include <iostream>

using namespace std;

int main(){
    
    cout << "Hello, welcome to Joel's Carpet Cleaning Service" << endl;
    
    int small_rooms{0};
    cout << "\nHow many small rooms would you like cleaned?";
    cin >> small_rooms;
    
    int large_rooms{0};
    cout << "How many large rooms would you like cleaned?";
    cin >> large_rooms;
    
    const double price_per_small_rooms {25.0};
    const double price_per_large_rooms {35.0};
    
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms" << endl;
    cout << "Number of large rooms" << endl;
    
    cout << "Price per small rooms:$" << price_per_small_rooms << endl;
    cout << "Price per large rooms:$" << price_per_large_rooms << endl;
    
    cout << "Cost:$"
         << (price_per_small_rooms * small_rooms) +
          (price_per_large_rooms * large_rooms)
         << endl;
         
    cout << "Tax:$"
         << ((price_per_small_rooms * small_rooms) +
          (price_per_large_rooms * large_rooms)) * sales_tax 
         << endl;
         
    cout << "=========================================" << endl;
    cout << "Total estimate:$"
         << ((price_per_small_rooms * small_rooms) + (price_per_large_rooms * large_rooms)) + 
           (((price_per_small_rooms * small_rooms) + (price_per_large_rooms * large_rooms)) * sales_tax)
         << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout <<endl;
    return 0;
         
}


