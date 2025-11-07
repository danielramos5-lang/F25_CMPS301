#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string customerName;
	int numItems;
	double pricePerItem, subtotal, discount = 0.0, memberDiscount = 0.0, finalTotal;
	char isMember;

	cout << "****** Welcome to Tech Store Invoice Calculator *****" << endl;
	cout << "Enter customer name: ";
	getline(cin, customerName);

	cout << "Enter number of items: ";
	cin >> numItems;

	cout << "Enter price per item: ";
	cin >> pricePerItem;

	cout << "Are you a store member (Y/N)? ";
	cin >> isMember;

	//Calculations
	subtotal = pricePerItem * numItems;

	//Apply purchase discount
	if (subtotal > 500)
		discount = subtotal * 0.10;
	else if (subtotal > 300)
		discount = subtotal * 0.05;
	else
		discount = 0.0;

	double discountedTotal = subtotal - discount;

	//Apply membership discount
	if (isMember == 'Y' || isMember == 'y')
		memberDiscount = discountedTotal * 0.05;

	// Calculate finalTotal after all discounts
	finalTotal = discountedTotal - memberDiscount;

	//Output invoice
	cout << fixed << showpoint << setprecision(2);
	cout << "\n********** PURCHASE INVOICE **********\n" << endl;

	cout << setw(30) << left << setfill('.') << "Customer Name" << ": " << customerName << endl;
	cout << setw(30) << left << setfill('.') << "Items Purchased: " << numItems << endl;
	cout << setw(30) << left << setfill('.') << "Price Per Item:" << "$" << pricePerItem << endl;
	cout << setw(30) << left << setfill('.') << "Subtotal:" << "$" << subtotal << endl;

	if (subtotal > 500)
		cout << setw(30) << left << setfill('.') << "Discount Applied:" << "10%" << endl;
	else if (subtotal > 300)
		cout << setw(30) << left << setfill('.') << "Discount Applied:" << "5%" << endl;
	else
		cout << setw(30) << left << setfill('.') << "Discount Applied:" << "None" << endl;
	if (isMember == 'Y' || isMember == 'y')
		cout << setw(30) << left << setfill('.') << "Membership Discount:" << "5%" << endl;
	else
		cout << setw(30) << left << setfill('.') << "Membership Discount:" << "None" << endl;

	cout << "----------------------------------------" << endl;
	cout << setw(30) << left << setfill('.') << "Final Total:" << "$" << finalTotal << endl;
	cout << "****************************************\n" << endl;
	cout << "Thank you for shopping with us!\n";
	return 0;

}