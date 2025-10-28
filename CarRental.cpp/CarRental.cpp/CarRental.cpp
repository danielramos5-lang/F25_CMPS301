#include <iostream>
#include <iomanip>  // For setw(), setfill(), setprecision()
using namespace std;

int main() {
    // Welcome message
    cout << "****** Welcome to the Car Rental Cost Estimator ******" << endl;

    // Declare variables
    int rentalDays, mileageAllowance, milesDriven, mileageLimit, excessMiles;
    double dailyRate, insurancePerDay, overMileageCharge;
    double baseCost, insuranceCost, overageFee, totalCost;

    // Input section
    cout << "Enter number of rental days: ";
    cin >> rentalDays;

    cout << "Enter daily rental rate ($): ";
    cin >> dailyRate;

    cout << "Enter insurance per day ($): ";
    cin >> insurancePerDay;

    cout << "Enter total miles driven: ";
    cin >> milesDriven;

    cout << "Enter mileage allowance per day: ";
    cin >> mileageAllowance;

    cout << "Enter over-mileage charge per mile ($): ";
    cin >> overMileageCharge;

    // Calculations
    baseCost = rentalDays * dailyRate;
    insuranceCost = rentalDays * insurancePerDay;
    mileageLimit = rentalDays * mileageAllowance;

    if (milesDriven > mileageLimit)
        excessMiles = milesDriven - mileageLimit;
    else
        excessMiles = 0;

    overageFee = excessMiles * overMileageCharge;
    totalCost = baseCost + insuranceCost + overageFee;

    // Output formatting
    cout << fixed << showpoint << setprecision(2);
    cout << "\n============ CAR RENTAL INVOICE ============" << endl;

    cout << "Rental Days: " << rentalDays << endl;
    cout << "Daily Rate: $" << dailyRate << endl;
    cout << "Insurance per Day: $" << insurancePerDay << endl;

    cout << "--------------------------------------------" << endl;
    cout << setw(25) << setfill('.') << left << "Base Cost:" << "$" << baseCost << endl;
    cout << setw(25) << setfill('.') << left << "Insurance Cost:" << "$" << insuranceCost << endl;
    cout << setw(25) << setfill('.') << left << "Mileage Limit:" << mileageLimit << " miles" << endl;
    cout << setw(25) << setfill('.') << left << "Miles Driven:" << milesDriven << " miles" << endl;
    cout << setw(25) << setfill('.') << left << "Excess Miles:" << excessMiles << " miles" << endl;
    cout << setw(25) << setfill('.') << left << "Overage Fee:" << "$" << overageFee << endl;

    cout << "--------------------------------------------" << endl;
    cout << setw(25) << setfill('.') << left << "Total Cost:" << "$" << totalCost << endl;

    cout << "============================================" << endl;
    cout << "Thank you for choosing our rental service!" << endl;
    cout << "CMPS 301: Programming Concepts Fall 2025" << endl;

    return 0;
}
