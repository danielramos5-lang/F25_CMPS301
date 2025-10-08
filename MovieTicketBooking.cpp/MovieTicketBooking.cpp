#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to Cinemagic Booking System ******" << endl;

    // Declare variables
    string customerName, movieTitle, showtime, seatNumber, theaterLocation;
    int theaterNumber, numTickets;
    double ticketPrice;

    // Collect input from user
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter movie title: ";
    getline(cin, movieTitle);

    cout << "Enter showtime: ";
    getline(cin, showtime);

    cout << "Enter theater number: ";
    cin >> theaterNumber;
    cin.ignore(); // Clear input buffer

    cout << "Enter seat number: ";
    getline(cin, seatNumber);

    cout << "Enter number of tickets: ";
    cin >> numTickets;

    cout << "Enter ticket price per person: ";
    cin >> ticketPrice;
    cin.ignore();

    cout << "Enter theater location: ";
    getline(cin, theaterLocation);

    // Perform calculation
    double totalPrice = ticketPrice * numTickets;

    // Display formatted ticket confirmation
    cout << fixed << setprecision(2);
    cout << "========== CINEMAGIC TICKET CONFIRMATION ==========" << endl;
    cout << "Customer: " << customerName << endl;
    cout << "Movie: " << movieTitle << endl;
    cout << "Showtime: " << showtime << endl;
    cout << "Theater: " << theaterNumber << endl;
    cout << "Seat: " << seatNumber << endl;
    cout << "Location: " << theaterLocation << endl;
    cout << "Tickets: " << numTickets << endl;
    cout << "Price per Ticket:$" << ticketPrice << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total: $" << totalPrice << endl;
    cout << "====================================================" << endl;
    cout << "Enjoy the show!" << endl;

    return 0;
}
