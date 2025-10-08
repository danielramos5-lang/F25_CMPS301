#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to the Tech Store Purchase Invoice Generator ******" << endl;

    // Declare variables
    string item1Name, item2Name, accessoryName;
    double item1Price, item2Price, accessoryPrice;
    const double TAX_RATE = 0.095; // 9.5%

    // Input Tech Item #1
    cout << "Enter name of Tech Item #1: ";
    getline(cin, item1Name);
    cout << "Enter price: ";
    cin >> item1Price;
    cin.ignore();

    // Input Tech Item #2
    cout << "Enter name of Tech Item #2: ";
    getline(cin, item2Name);
    cout << "Enter price: ";
    cin >> item2Price;
    cin.ignore();

    // Input Accessory
    cout << "Enter name of Accessory: ";
    getline(cin, accessoryName);
    cout << "Enter price: ";
    cin >> accessoryPrice;

    // Perform calculations
    double subtotal = item1Price + item2Price + accessoryPrice;
    double tax = subtotal * TAX_RATE;
    double total = subtotal + tax;

    // Display formatted invoice exactly as sample output
    cout << fixed << setprecision(2);
    cout << "=========== TECH STORE INVOICE ===========" << endl;
    cout << item1Name << " $" << item1Price << endl;
    cout << item2Name << " $" << item2Price << endl;
    cout << accessoryName << " $" << accessoryPrice << endl;
    cout << "------------------------------------------" << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (9.5%): $" << tax << endl;
    cout << "Total: $" << total << endl;
    cout << "==========================================" << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}
