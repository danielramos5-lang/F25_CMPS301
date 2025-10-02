#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string fullName = "Daniel Ramos";
    string nickname = "Dani";
    int age = 18;
    double height = 5.7; // in feet
    string favoriteColor = "Blue";
    string cityOfBirth = "Cortes, Honduras";
    string favoriteFood = "Tacos";
    int numberOfPets = 2;
    string somethingFun = "Play soccer";
    string dreamVacation = "Brasil";

    // Display profile
    cout << "Full Name: " << fullName << endl;
    cout << "Nickname: " << nickname << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " ft" << endl;
    cout << "Favorite Color: " << favoriteColor << endl;
    cout << "City of Birth: " << cityOfBirth << endl;
    cout << "Favorite Food: " << favoriteFood << endl;
    cout << "Number of Pets: " << numberOfPets << endl;
    cout << "Something Fun: " << somethingFun << endl;
    cout << "Dream Vacation: " << dreamVacation << endl;

    // Paragraph-style introduction
    cout << "Hi, my name is " << fullName << " but you can call me " << nickname << ". ";
    cout << "I am " << age << " years old and I was born in " << cityOfBirth << ". ";
    cout << "I love " << favoriteFood << " and my favorite color is " << favoriteColor << ". ";
    cout << "I have " << numberOfPets << " pets and for fun I " << somethingFun << ". ";
    cout << "One day, I hope to visit " << dreamVacation << "!" << endl;

    return 0;
}
