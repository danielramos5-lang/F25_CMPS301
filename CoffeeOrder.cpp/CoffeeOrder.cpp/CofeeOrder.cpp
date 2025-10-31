#include <iostream>
#include <iomanip>  // For setw, setfill, fixed, setprecision
using namespace std;

int main() {
    // Constants for coffee prices
    const double SMALL_PRICE = 2.25;
    const double MEDIUM_PRICE = 3.00;
    const double LARGE_PRICE = 3.75;

    // Variables to store user input
    int smallQty, mediumQty, largeQty;
    double taxRate;

    // Welcome message
    cout << "****** Welcome to the Coffee Shop Order Calculator ******" << endl;

    // Prompt user for order quantities and tax rate
    cout << "Enter number of small coffees: ";
    cin >> smallQty;
    cout << "Enter number of medium coffees: ";
    cin >> mediumQty;
    cout << "Enter number of large coffees: ";
    cin >> largeQty;
    cout << "Enter tax rate (%): ";
    cin >> taxRate;

    // Calculate subtotal, tax, and total
    double subtotal = (smallQty * SMALL_PRICE) + (mediumQty * MEDIUM_PRICE) + (largeQty * LARGE_PRICE);
    double taxAmount = (taxRate / 100.0) * subtotal;
    double total = subtotal + taxAmount;

    // Print formatted receipt
    cout << "================= COFFEE ORDER RECEIPT =================" << endl;

    cout << left << setw(30) << setfill('.') << "Small Coffees (" << smallQty << " x $" << SMALL_PRICE << "):"
        << "$" << fixed << setprecision(2) << subtotal * (smallQty * SMALL_PRICE / subtotal) << endl;

    cout << left << setw(30) << setfill('.') << "Medium Coffees (" << mediumQty << " x $" << MEDIUM_PRICE << "):"
        << "$" << fixed << setprecision(2) << mediumQty * MEDIUM_PRICE << endl;

    cout << left << setw(30) << setfill('.') << "Large Coffees (" << largeQty << " x $" << LARGE_PRICE << "):"
        << "$" << fixed << setprecision(2) << largeQty * LARGE_PRICE << endl;

    cout << "--------------------------------------------------------" << endl;

    cout << left << setw(30) << setfill('.') << "Subtotal:" << "$" << fixed << setprecision(2) << subtotal << endl;
    cout << left << setw(30) << setfill('.') << "Tax (" << taxRate << "%):" << "$" << fixed << setprecision(2) << taxAmount << endl;

    cout << "--------------------------------------------------------" << endl;
    cout << left << setw(30) << setfill('.') << "Total Amount Due:" << "$" << fixed << setprecision(2) << total << endl;
    cout << "========================================================" << endl;
    cout << "Thank you for supporting local coffee!" << endl;

    return 0;
}
