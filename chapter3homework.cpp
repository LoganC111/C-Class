#include <iostream>

using namespace std;

int main() {
    double electricityBill, waterBill, gasBill, other, totalUtilities; 

    cout << "Enter your electricity bill: ";
    cin >> electricityBill;

    cout << "Enter your water bill: ";
    cin >> waterBill; 

    cout << "Enter your gas bill: ";
    cin >> gasBill; 

    cout << "Enter your other bills: ";
    cin >> other; 

    totalUtilities = electricityBill + waterBill + gasBill + other; 

    cout << "\nTotal utility cost for this month: $" << totalUtilities << endl; 

    return 0;
}