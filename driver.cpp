# adventure
// Giselle Beltran
// Samuel Sanchez
// Alexis Munoz
// Github Labwork

#include <iostream>

using namespace std;

char menu();
double clilmbing();
double scuba();
double skyDive();
double spelunk();


int main()
{


  return 0;
}
// Need to use independent variables in the int main(). Set int people = numberOfPeople() and double discountPrice = discount(int people). Make sure to execute functions within menu() instead of int main().
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
double skyDive(int people, int discountPrice)
{
    char choice;
    double price;
    cout << "Here are the following option for Sky Dive Colorado: " << endl;
    cout << endl << "Base Charge: $700 per person" << endl;
    cout << "a. Lodging at Wilderness Lodge: $65/day per person" << endl;
    cout << "b. Lodging at Luxury Inn: $120/day per person" << endl;
    cout << "Select your chocie of lodge: ";
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
