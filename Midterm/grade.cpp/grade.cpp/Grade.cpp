#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string studentName;
	double score1, score2, score3, finalAverage;
	string letterGrade;

	cout << "****** Welcome to the Grade Analyzer ******" << endl;

	// Input section
	cout << "Enter student name: ";
	getline(cin, studentName);

	cout << "Enter score for Assignment 1: ";
	cin >> score1;
	cout << "Enter score for Assignment 2: ";
	cin >> score2;
	cout << "Enter score for Assignment 3: ";
	cin >> score3;

	// Calculate final average
	finalAverage = (score1 + score2 + score3) / 3.0;

	// Determine letter grade
	if (finalAverage >= 97) {
		letterGrade = "A+";
	} else if (finalAverage >= 93) {
		letterGrade = "A";
	} else if (finalAverage >= 90) {
		letterGrade = "A-";
	} else if (finalAverage >= 87) {
		letterGrade = "B+";
	} else if (finalAverage >= 83) {
		letterGrade = "B";
	} else if (finalAverage >= 80) {
		letterGrade = "B-";
	} else if (finalAverage >= 77) {
		letterGrade = "C+";
	} else if (finalAverage >= 73) {
		letterGrade = "C";
	} else if (finalAverage >= 70) {
		letterGrade = "C-";
	} else if (finalAverage >= 67) {
		letterGrade = "D+";
	} else if (finalAverage >= 63) {
		letterGrade = "D";
	} else if (finalAverage >= 60) {
		letterGrade = "D-";
	} else {
		letterGrade = "F";
	}

	// Display results
	cout << fixed << showpoint << setprecision(2);
	cout << "\n============== FINAL GRADE REPORT ==============" << endl;
	cout << setw(30) << left << setfill('.') << "Student Name:" << studentName << endl;
	cout << setw(30) << left << setfill('.') << "Assignment 1:" << score1 << endl;
	cout << setw(30) << left << setfill('.') << "Assignment 2:" << score2 << endl;
	cout << setw(30) << left << setfill('.') << "Assignment 3:" << score3 << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(30) << left << setfill('.') << "Final Average:" << finalAverage << endl;
	cout << setw(30) << left << setfill('.') << "Final Grade:" << letterGrade << endl;
	cout << "===============================================" << endl;
	cout << "Keep up the great work!" << endl;

	return 0;

}