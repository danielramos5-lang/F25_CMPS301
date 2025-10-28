#include <iostream>
#include <iomanip>  // For setw(), setfill(), fixed, setprecision()
using namespace std;

int main() {
    // Welcome header
    cout << "****** Welcome to the Monthly Budget & Savings Planner ******" << endl;

    // Variables
    double income, rent, utilities, groceries, transportation;
    double savingsPercent, totalExpenses, savingsGoal, remainingBalance;

    // ===== INPUT =====
    cout << "\nEnter your monthly income ($): ";
    cin >> income;

    cout << "Enter your rent or mortgage cost ($): ";
    cin >> rent;

    cout << "Enter your utilities cost ($): ";
    cin >> utilities;

    cout << "Enter your groceries cost ($): ";
    cin >> groceries;

    cout << "Enter your transportation cost ($): ";
    cin >> transportation;

    cout << "Enter your desired savings goal (% of income): ";
    cin >> savingsPercent;

    // ===== CALCULATIONS =====
    totalExpenses = rent + utilities + groceries + transportation;
    savingsGoal = (savingsPercent / 100) * income;
    remainingBalance = income - totalExpenses - savingsGoal;

    // ===== OUTPUT =====
    cout << fixed << showpoint << setprecision(2);

    cout << "\n============== MONTHLY BUDGET REPORT ==============" << endl;

    cout << setw(30) << setfill('.') << left << "Monthly Income:" << "$" << income << endl;
    cout << "----------------------------------------------------" << endl;

    cout << setw(30) << setfill('.') << left << "Rent / Mortgage:" << "$" << rent << endl;
    cout << setw(30) << setfill('.') << left << "Utilities:" << "$" << utilities << endl;
    cout << setw(30) << setfill('.') << left << "Groceries:" << "$" << groceries << endl;
    cout << setw(30) << setfill('.') << left << "Transportation:" << "$" << transportation << endl;

    cout << "----------------------------------------------------" << endl;
    cout << setw(30) << setfill('.') << left << "Total Expenses:" << "$" << totalExpenses << endl;
    cout << setw(30) << setfill('.') << left << "Savings Goal (" << (int)savingsPercent << "%):"
        << "$" << savingsGoal << endl;
    cout << setw(30) << setfill('.') << left << "Remaining Balance:" << "$" << remainingBalance << endl;

    cout << "====================================================" << endl;
    cout << "Smart planning leads to financial freedom!" << endl;
    cout << "CMPS 301: Programming Concepts Fall 2025" << endl;

    return 0;
}
