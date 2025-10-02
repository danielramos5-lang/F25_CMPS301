#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double paycheck = 2000.00;
    double rent = 800.00;
    double groceries = 250.00;
    double utilities = 150.00;
    double transportation = 100.00;
    double entertainment = 120.00;
    double insurance = 200.00;
    double phoneBill = 60.00;
    double subscriptions = 30.00;
    double savingsPercentage = 0.20;

    // Calculate totals
    double totalExpenses = rent + groceries + utilities + transportation + entertainment + insurance + phoneBill + subscriptions;
    double remainingBalance = paycheck - totalExpenses;
    double amountToSave = remainingBalance * savingsPercentage;
    double finalAmountToSpend = remainingBalance - amountToSave;

    // Display results
    cout << "Paycheck: " << paycheck << endl;
    cout << "Rent: " << rent << endl;
    cout << "Groceries: " << groceries << endl;
    cout << "Utilities: " << utilities << endl;
    cout << "Transportation: " << transportation << endl;
    cout << "Entertainment: " << entertainment << endl;
    cout << "Insurance: " << insurance << endl;
    cout << "Phone Bill: " << phoneBill << endl;
    cout << "Subscriptions: " << subscriptions << endl;
    cout << "Total Expenses: " << totalExpenses << endl;
    cout << "Remaining Balance: " << remainingBalance << endl;
    cout << "Amount to Save: " << amountToSave << endl;
    cout << "Final Amount to Spend: " << finalAmountToSpend << endl;

    return 0;
}
