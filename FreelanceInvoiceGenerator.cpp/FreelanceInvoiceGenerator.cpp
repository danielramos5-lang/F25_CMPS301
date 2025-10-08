#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to the Freelance Invoice Generator ******" << endl;

    // Declare variables
    string client1, client2, client3;
    double hours1, hours2, hours3;
    double rate1, rate2, rate3;

    // Input for Client 1
    cout << "Client 1 Name: ";
    getline(cin, client1);
    cout << "Hours Worked: ";
    cin >> hours1;
    cout << "Hourly Rate: ";
    cin >> rate1;
    cin.ignore(); // Clear input buffer

    // Input for Client 2
    cout << "Client 2 Name: ";
    getline(cin, client2);
    cout << "Hours Worked: ";
    cin >> hours2;
    cout << "Hourly Rate: ";
    cin >> rate2;
    cin.ignore();

    // Input for Client 3
    cout << "Client 3 Name: ";
    getline(cin, client3);
    cout << "Hours Worked: ";
    cin >> hours3;
    cout << "Hourly Rate: ";
    cin >> rate3;

    // Perform calculations
    double earning1 = hours1 * rate1;
    double earning2 = hours2 * rate2;
    double earning3 = hours3 * rate3;
    double totalIncome = earning1 + earning2 + earning3;

    // Display formatted invoice
    cout << fixed << setprecision(2);
    cout << "============== FREELANCER INVOICE ==============" << endl;
    cout << client1 << " " << hours1 << " hrs @ $" << rate1 << "/hr = $" << earning1 << endl;
    cout << client2 << " " << hours2 << " hrs @ $" << rate2 << "/hr = $" << earning2 << endl;
    cout << client3 << " " << hours3 << " hrs @ $" << rate3 << "/hr = $" << earning3 << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Total Income: = $" << totalIncome << endl;
    cout << "===============================================" << endl;
    cout << "Keep hustling!" << endl;

    return 0;
}
