#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to the Photography Trip Planner ******" << endl;

    // Declare variables
    double milesA, milesB, milesC;
    double mpg, gasPrice, gearWeight;

    // Receive user input
    cout << "Miles to Location A: ";
    cin >> milesA;
    cout << "Miles to Location B: ";
    cin >> milesB;
    cout << "Miles to Location C: ";
    cin >> milesC;
    cout << "Fuel efficiency (MPG): ";
    cin >> mpg;
    cout << "Gas price per gallon: ";
    cin >> gasPrice;
    cout << "Camera gear weight (lbs): ";
    cin >> gearWeight;

    // Perform calculations
    double totalDistance = milesA + milesB + milesC;
    double fuelCost = (totalDistance / mpg) * gasPrice;
    double weightFee = 0.15 * gearWeight * totalDistance;
    double totalTripCost = fuelCost + weightFee;

    // Display formatted output matching the sample
    cout << fixed << setprecision(2);
    cout << "=========== PHOTOGRAPHY TRIP PLANNER ===========" << endl;
    cout << "Total Distance: " << totalDistance << " miles" << endl;
    cout << "Fuel Efficiency: " << mpg << " MPG" << endl;
    cout << "Gas Price: $" << gasPrice << endl;
    cout << "Camera Gear Weight: " << gearWeight << " lbs" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Estimated Fuel Cost: $" << fuelCost << endl;
    cout << "Weight Fee Estimate: $" << weightFee << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Estimated Total Cost: $" << totalTripCost << endl;
    cout << "===============================================" << endl;
    cout << "Shoot smart. Travel safe!" << endl;

    return 0;
}
