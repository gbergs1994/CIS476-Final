#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int main() {
    //Flight 1: {DTW, NYC, 12/24/2025, 12/29/2025, $210} 
    //Flight 2: {CHI, LAX, 01/15/2026, 01/20/2026, $300} 
    //Flight 3: {NYC, MIA, 03/10/2026, 03/17/2026, $180} 

    //John: Flight 1 $180 and Flight 2 $200. 
    //Maria: Flight 2 $220 and Flight 3 $150. 

    int flightNumber;
    int flight1 = 200;
    int flight2 = 250;
    int flight3 = 180;

    cout << "What flight is changing its price?: " << endl;
    cin >> flightNumber;

    if (flightNumber == 1) {
        cout << "What is the new cost of tickets for Flight 1?: " << endl;
        cin >> flight1;
    }
    else if (flightNumber == 2) {
        cout << "What is the new cost of tickets for Flight 2?: " << endl;
        cin >> flight2;
    }
    else if (flightNumber == 3) {
        cout << "What is the new cost of tickets for Flight 3?: " << endl;
        cin >> flight3;
    }

    if(flight1 <= 180) {
        cout << "John, the price for Flight 1 is now $" << flight1 << endl;
    }
    else if (flight2 <= 200) {
        cout << "John, the price for Flight 2 is now $" << flight2 << endl;
    }

    if (flight2 <= 220) {
        cout << "Maria, the price for Flight 2 is now $" << flight2 << endl;
    }
    else if (flight3 <= 150) {
        cout << "Maria, the price for Flight 3 is now $" << flight3 << endl;
    }



}