#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
   //Quantity
    int Qrooms = 0, Qpasta = 0, Qbugger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;

    //Food item sold
    int Srooms = 0, Spasta = 0, Sbugger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;

    //Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_bugger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms available: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of bugger: ";
    cin >> Qbugger;
    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake: ";
    cin >> Qshake;
    cout << "\n Quantity of chicken-roll: ";
    cin >> Qchicken; m:
    cout << "\n\t\t\t Please select from the menu options ";
    cout << "\n\n1) Rooms: ";
    cout << "\n2) Pasta";
    cout << "\n3) Bugger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chicken-roll";
    cout << "\n7) Information regarding sales and collections";
    cout << "\n8) Exit";

    cout << "\n\n Please enter your choice: ";
    cin >> choice;