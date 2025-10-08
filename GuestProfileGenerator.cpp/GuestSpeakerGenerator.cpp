#include <iostream>
#include <string>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to the Guest Profile Generator ******" << endl;

    // Declare string variables for all inputs
    string fullName, preferredName, email, phone, location;
    string occupation, companyOrSchool, hobby, favoriteColor, quote;

    // Collect input using getline() for all fields
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your preferred name: ";
    getline(cin, preferredName);

    cout << "Enter your email address: ";
    getline(cin, email);

    cout << "Enter your phone number: ";
    getline(cin, phone);

    cout << "Enter your city and state: ";
    getline(cin, location);

    cout << "Enter your occupation: ";
    getline(cin, occupation);

    cout << "Enter your company or school: ";
    getline(cin, companyOrSchool);

    cout << "Enter your favorite hobby: ";
    getline(cin, hobby);

    cout << "Enter your favorite color: ";
    getline(cin, favoriteColor);

    cout << "Enter a short quote or motto: ";
    getline(cin, quote);

    // Display formatted Guest Profile Sheet (exact sample output format)
    cout << "=========== GUEST PROFILE SHEET ===========" << endl;
    cout << "Name: " << fullName << endl;
    cout << "Preferred Name: " << preferredName << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << "Location: " << location << endl;
    cout << "Occupation: " << occupation << endl;
    cout << "Company/School: " << companyOrSchool << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Favorite Color: " << favoriteColor << endl;
    cout << "Quote:" << endl;
    cout << quote << endl;
    cout << "===========================================" << endl;
    cout << "Thank you for sharing your profile!" << endl;

    return 0;
}
