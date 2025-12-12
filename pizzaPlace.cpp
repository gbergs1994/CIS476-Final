#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int main() { 

    string pizzaOrder; 

    cout << "Welcome to Pizza Place! What kind of pizza do you want?: " << endl; 

    cin >> pizzaOrder;

 

    if (pizzaOrder == "margherita") { 
	//new Chef Maria; 
    cout << "Maria is preparing a Margherita pizza." << endl; 
	//new Pizza Margherita; 
    } 
    else if (pizzaOrder == "pepperoni") {
	//new Chef Giovanni; 
	cout << "Giovani is preparing a Pepperoni pizza."  << endl; 
	//new Pizza Pepperoni; 
    }
    else { 
    cout << "We dont make that type of pizza here, sorry!" << endl; 
    } 

    return 0;

}