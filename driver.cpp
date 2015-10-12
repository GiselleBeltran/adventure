//# adventure
// Giselle Beltran
// Samuel Sanchez
// Alexis Muñoz
// Github Labwork

#include <iostream>

using namespace std;

char menu();
int numberOfPeople();
double discount(int people);
double climbing(int people);
double scuba(int people);
double skyDive(int people, int discountPrice);
double spelunk(int people);

int main()
{


  return 0;
}
// Need to use independent variables in the int main(). Set int people = numberOfPeople() and double discountPrice = discount(int people). Make sure to execute functions within menu() instead of int main().
char menu(){
    
}
int numberOfPeople()
{
    int people;
    cout << "List number of people going: ";
    cin >> people;
    return people;
}
double discount(int people)
{
    double discountPrice;
    if (people >= 5)
        discountPrice = (0.10);
    else
        discountPrice = (0.0);
    return discountPrice;
}
double climbing(int people){
    double priceTotal;
	string climbingInstruction, equipRental;
	
    cout << "Will you need any climbing instruction?\n";
    cin >> climbingInstruction;
    cout << "Will you need any equipment rentals?\n";
    cin >> equipRental;
    priceTotal = (people * 350.00);
    if ((climbingInstruction == "Yes") || (climbingInstruction == "yes")){
        priceTotal += (people*100);
    }
    if ((equipRental == "Yes") || (equipRental == "yes")){
        priceTotal += (people*40)*(3);
    }
    if (people >= 5){
    	priceTotal -= (priceTotal*(discount(people)));
    }
    return priceTotal;
}
double scuba(int people){
	double priceTotal;
	string scubaInstruction;
	
	cout << "Will you need any scuba instruction\n";
	cin >> scubaInstruction;
	
	priceTotal = (people * 1000.00);
	if ((scubaInstruction == "Yes") || (scubaInstruction == "yes")){
		priceTotal += (people * 100);
	}
	if (people >= 5){
	    priceTotal += (priceTotal*(discount(people)));
	}
	return priceTotal;
}
double skyDive(int people, int discountPrice)
{
    char choice;
    double price;
    cout << "Here are the following options for Sky Dive Colorado: " << endl;
    cout << endl << "Base Charge: $700 per person" << endl;
    cout << "a. Lodging at Wilderness Lodge: $65/day per person" << endl;
    cout << "b. Lodging at Luxury Inn: $120/day per person" << endl;
    cout << "c. Neither, I will provide my own lodging" << endl;
    cout << "Select your choice of lodge: ";
    cin >> choice;
    if (choice == 'a')
        price = ((700 - (700 * discountPrice)) * people) + (65 * people); 
    else if(choice == 'b')
        price = ((700 - (700 * discountPrice)) * people) + (120 * people); 
    else
        price = (700 - (700 * discountPrice))* people;
    cout << price << endl;
    return price;
}
double spelunk(int people){
    double priceTotal
    string equipRental;
    
    cout << "Will you need to rent equipment?\n";
    cin >> equipRental;
    
    priceTotal = (people * 700);
    if ((equipRental == "Yes") || (equipRental == "yes")){
        priceTotal += ((people * 40) * 8);
    }
    if (people >= 5){
        priceTotal += (priceTotal*(discount(people)));
    }
    return priceTotal;
}
