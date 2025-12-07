#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	// Variables
	string name, gender;
	int age, heightFeet, heightInches, totalInches;
	double weight, height, bmi;

	// Ask the user questions
	cout << "Please enter your name: ";
	getline(cin, name);

	cout << "Please enter your age: ";
	cin >> age;

	cout << "Please enter yout gender (M/F): ";
	cin >> gender;

	cout << "Please enter your height in feet: ";
	cin >> heightFeet;

	cout << "Please enter your height in inches: ";
	cin >> heightInches;

	cout << "Please enter your weight in pounds: ";
	cin >> weight;

	// Process the responses
	totalInches = (heightFeet * 12) + heightInches;
	bmi = (703 * weight) / (totalInches * totalInches);

	// Determine BMI status
	string status;

	if (bmi < 18.5)
		status = "Underweight";
	else if (bmi < 25)
		status = "Normal weight";
	else if (bmi < 30)
		status = "Overweight";
	else
		status = "Obesity";

	// Display the results
	cout << fixed << setprecision(2); // For 2 decimal places

	cout << "\nHello " << name << "!\n";
	cout << "You are a " << gender << ". You are " << age << " years old. ";
	cout << "You are currently " << heightFeet << "'" << heightInches;
	cout << " and you currently weight " << weight << "pounds." << endl;
	cout << "Your MBI is " << bmi << ", which is " << status << "." << endl;

	cout << "Thank you for using the MBI Calculator!" << endl;

	return 0;

}