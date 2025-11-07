#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string studentName;
	double gpa;
	int satScore;
	char extracurricular;
	string decision, reason;

	cout << "****** Welcome to the College Admission Checker ******" << endl;

	cout << "Enter student name: ";
	getline(cin, studentName);

	cout << "Enter GPA (0.0 - 4.0): ";
	cin >> gpa;

	cout << "Enter SAT score (out of 1600): ";
	cin >> satScore;

	cout << "Participated in extracurriculars? (Y/N): ";
	cin >> extracurricular;

	//Determine eligibility
	bool participated = (extracurricular == 'Y' || extracurricular == 'y');

	if (gpa >= 3.5 && satScore >= 1200) {
		decision = "ACCEPTED";
		reason = "Qualified based on high GPA and SAT score";
	}

	else if (gpa >= 3.0 && satScore >= 100 && participated) {
		decision = "ACCEPTED";
		reason = "Qualified based on GPA, SAT, and extracurriculars";
	}

	else {
		decision = "NOT ELIGIBLE";
		reason = "Did not meet the required criteria";
	}

	// Output results
	cout << fixed << setprecision(2);
	cout << "\n****** ADMISSION RESULT ******\n";
	cout << setw(30) << left << setfill('.') << "Student Name:" << studentName << endl;
	cout << setw(30) << left << setfill('.') << "GPA:" << gpa << endl;
	cout << setw(30) << left << setfill('.') << "SAT Score:" << satScore << endl;
	cout << setw(30) << left << setfill('.') << "Extracurriculars:" << (participated ? "Yes" : "No") << endl;
	cout << "----------------------------------------------" << endl;
	cout << setw(30) << left << setfill('.') << "Admission Decision:" << decision << endl;
	cout << setw(30) << left << setfill('.') << "Reason:" << reason << endl;
	cout << "=============================================\n";

	if (decision == "ACCEPTED")
		cout << "Congratulations and best wishes!" << endl;

	else
		cout << "Thank you for applying. Keep striving for success!" << endl;
	return 0;

}