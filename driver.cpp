//# adventure
// Giselle Beltran
// Samuel Sanchez
// Alexis Muñoz
// Github Labwork

#include <iostream>
#include <cctype>

using namespace std;

char menu(char answer);
int numberOfPeople();
double discount(int people);
double climbing(int people, double discountPrice);
double scuba(int people, double discountPrice);
double skyDive(int people, double discountPrice);
double spelunk(int people, double discountPrice);

int main()
{
    double discountPrice;
    char answer;
    int people;
    
cout << "Welcome to High Adventure Travel Agency\n" << endl;
    cout << "There are four vacation packages available: \n" << endl;
    cout << "Devil's Courthouse Adventure Weekend: \n"
         << "Rate: \n"
         << "\tBase Charge:" << "\t \t  \t   $350 per person\n" 
         << "\tClimbing Instruction:" << "\t \t   $100 per person\n"  
         << "\tEquipment Rental:" << "\t \t   $40/day per person" << endl;
   cout << "\nScuba Bahama: \n"
         << "Rate: \n"
         << "\tBase Charge:" << "\t \t \t   $1000 per person\n" 
         << "\tScuba Instruction:" << "\t \t   $100 per person\n" << endl;
    cout << "Sky Dive Colorado: \n"
         << "Rate: \n"
         << "\tBase Charge:" << "\t \t \t   $700 per person\n"
         << "\tLodging at Wilderness Lodge:" << "\t   $65/day per person\n"  
         << "\tLodging at Luxury Inn:" << "\t \t   $120/day per person" << endl;
    cout << "\nBarron Cliff Spelunk: \n"
         << "Rate: \n"
         << "\tBase Charge:" << "\t \t \t   $700 per person\n"  
         << "\tEquipment Rental:" << "\t \t   $40/day per person" << endl;
    cout << "\nPlease select a package that you'd like: " << endl; 
         cout << "Your choices are: \n"
              << "\nClimbing package: press 'A' or 'a'\n"
              << "\nScuba package: press 'B' or 'b'\n"
              << "\nSky Dive package: press 'C' or 'c'\n"
              << "\nHiking package: press 'D' or 'd'\n" << endl;
         cin  >> answer;
         menu(answer);
         
         
         
  return 0;
}
// Need to use independent variables in the int main(). Set int people = numberOfPeople() and double discountPrice = discount(int people). Make sure to execute functions within menu() instead of int main().
char menu(char answer){
	answer = tolower(answer);
	int people = numberOfPeople();
    double discountPrice = discount(people);
	
	switch (answer)
	{
		case 'a': climbing(people, discountPrice);
		break;
		
		case 'b': scuba(people, discountPrice);
		break;
		
		case 'c': skyDive(people, discountPrice);
		break;
		
		case 'd': spelunk(people, discountPrice);
		break;
	}
	
    
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
double climbing(int people, double discountPrice){
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
    	priceTotal -= (priceTotal*(discountPrice));
    }
    cout << "Total: $"<<priceTotal << endl;
    return priceTotal;
}
double scuba(int people, double discountPrice){
	double priceTotal;
	string scubaInstruction;
	
	cout << "Will you need any scuba instruction\n";
	cin >> scubaInstruction;
	
	priceTotal = (people * 1000.00);
	if ((scubaInstruction == "Yes") || (scubaInstruction == "yes")){
		priceTotal += (people * 100.00);
	}
	if (people >= 5){
	    priceTotal += (priceTotal*(discountPrice));
	}
	cout << "Total: $"<<priceTotal << endl;
	return priceTotal;
}
double skyDive(int people, double discountPrice)
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
    cout << "Total: $" << price << endl;
    return price;
}
double spelunk(int people, double discountPrice){
    double priceTotal;
    string equipRental;
    
    cout << "Will you need to rent equipment?\n";
    cin >> equipRental;
    
    priceTotal = (people * 700.00);
    if ((equipRental == "Yes") || (equipRental == "yes")){
        priceTotal += ((people * 40) * 8);
    }
    if (people >= 5){
        priceTotal += (priceTotal*(discountPrice));
    }
    cout << "Total: $"<<priceTotal << endl;
    return priceTotal;
}
