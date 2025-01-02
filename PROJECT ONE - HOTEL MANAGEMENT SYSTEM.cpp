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
    switch (choice) {
    case 1:
        cout << "\n\n Enter the number of rooms you want: ";
        cin >> quant;
        if (Qrooms - Srooms >= quant) {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "rooms have been alloted to you";
        }
        else {
            cout << "\n\tOnly" << Qrooms - Srooms << "remaining";
            break;
        }
    case 2:
        cout << "\n\n Enter Pasta quantity: ";
        cin >> quant;
        if (Qpasta - Spasta >= quant) {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 250;
            cout << "\n\n\t\t" << quant << "pasta ordered succesfully! ";
        }
        else {
            cout << "\n\tSory, only" << Qpasta - Spasta << "Pasta remaining.";
            break;
        }
    case 3:
        cout << "\n\n Enter Bugger quantity: ";
        cin >> quant;
        if (Qbugger - Sbugger >= quant) {
            Sbugger = Sbugger + quant;
            Total_bugger = Total_bugger + quant * 120;
            cout << "\n\n\t\t" << quant << "bugger ordered succesfully! ";
        }
        else {
            cout << "\n\tOnly" << Qbugger - Sbugger << "Bugger remaining in the hotel";
            break;
        }
    case 4:
        cout << "\n\n Enter Noodles quantity: ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant) {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + quant * 200;
            cout << "\n\n\t\t" << quant << "noodles ordered succesfully! ";
        }
        else {
            cout << "\n\tOnly" << Qnoodles - Snoodles << "Pasta remaining in the hotel";
            break;
        }
    case 5:
        cout << "\n\n Enter shake quantity: ";
        cin >> quant;
        if (Qshake - Sshake >= quant) {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + quant * 170;
            cout << "\n\n\t\t" << quant << "shake ordered succesfully! ";
        }
        else {
            cout << "\n\tOnly" << Qshake - Sshake << "Shake remaining in the hotel";
            break;
        }
    case 6:
        cout << "\n\n Enter chicken-roll quantity: ";
        cin >> quant;
        if (Qchicken - Schicken >= quant) {
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + quant * 320;
            cout << "\n\n\t\t" << quant << "chicken-roll ordered succesfully! ";
        }
        else {
            cout << "\n\tOnly" << Qbugger - Sbugger << "chicken-rolls remaining in the hotel";
            break;
        }
    case 7:
        cout << "\n\t\tDetails of sales and collection";
        cout << "\n\n Number of rooms we had:" << Qrooms;
        cout << "\n\n Number of rooms we gave for rent:" << Srooms;
        cout << "\n\n Remaining rooms:" << Qrooms - Srooms;
        cout << "\n\n Total rooms collection for the day:" << Total_rooms;

        cout << "\n\n\n\n\n Number of Pastas we had:" << Qpasta;
        cout << "\n\n Number of pastas we sold:" << Spasta;
        cout << "\n\n Remaining pastas:" << Qpasta - Spasta;
        cout << "\n\n Total pastas collection for the day:" << Total_pasta; 