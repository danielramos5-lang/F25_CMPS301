#include <iostream>
#include <string>
using namespace std;

int main() {
    int month, day, year;
    char repeat = 'Y';

    cout << "Welcome to Birthday Date Meaning Generator!" << endl;

    while (repeat == 'Y' || repeat == 'y') {

        // Ask user for inputs
        cout << "Please enter the month of your birthday: ";
        cin >> month;

        cout << "Please enter the day of your birthday: ";
        cin >> day;

        cout << "Please enter the year of your birthday (2000-2023): ";
        cin >> year;

        cout << endl;

        // Meaning for Month
        switch (month) {
        case 1:  cout << "The month of January means Janus" << endl; break;
        case 2:  cout << "The month of February means Purification" << endl; break;
        case 3:  cout << "The month of March means Mars" << endl; break;
        case 4:  cout << "The month of April means To Open" << endl; break;
        case 5:  cout << "The month of May means Maia" << endl; break;
        case 6:  cout << "The month of June means Juno" << endl; break;
        case 7:  cout << "The month of July means Julius Caesar" << endl; break;
        case 8:  cout << "The month of August means Augustus" << endl; break;
        case 9:  cout << "The month of September means Seventh Month" << endl; break;
        case 10: cout << "The month of October means Eighth Month" << endl; break;
        case 11: cout << "The month of November means Ninth Month" << endl; break;
        case 12: cout << "The month of December means Tenth Month" << endl; break;
        default: cout << "Invalid month entered." << endl;
        }

        // Meaning for Day
        switch (day) {
        case 1:  cout << "The 1st of your day means Self-Starter" << endl; break;
        case 2:  cout << "The 2nd of your day means Peacekeeper" << endl; break;
        case 3:  cout << "The 3rd of your day means Creative" << endl; break;
        case 4:  cout << "The 4th of your day means Hard Worker" << endl; break;
        case 5:  cout << "The 5th of your day means Adventurer" << endl; break;
        case 6:  cout << "The 6th of your day means Nurturer" << endl; break;
        case 7:  cout << "The 7th of your day means Deep Thinker" << endl; break;
        case 8:  cout << "The 8th of your day means Powerful" << endl; break;
        case 9:  cout << "The 9th of your day means Humanitarian" << endl; break;
        default:
            cout << "The " << day << "th of your day means Unique Personality" << endl;
        }

        // Meaning for Year
        switch (year) {
        case 2000: cout << "The year 2000 means you are Millennial" << endl; break;
        case 2001: cout << "The year 2001 means you are Innovative" << endl; break;
        case 2002: cout << "The year 2002 means you are Balanced" << endl; break;
        case 2003: cout << "The year 2003 means you are Motivated" << endl; break;
        case 2004: cout << "The year 2004 means you are Practical" << endl; break;
        case 2005: cout << "The year 2005 means you are Creative" << endl; break;
        case 2006: cout << "The year 2006 means you are Caring" << endl; break;
        case 2007: cout << "The year 2007 means you are Intuitive" << endl; break;
        case 2008: cout << "The year 2008 means you are Ambitious" << endl; break;
        case 2009: cout << "The year 2009 means you are Wise" << endl; break;
        case 2010: cout << "The year 2010 means you are Independent" << endl; break;
        case 2011: cout << "The year 2011 means you are Optimistic" << endl; break;
        case 2012: cout << "The year 2012 means you are Energetic" << endl; break;
        case 2013: cout << "The year 2013 means you are Determined" << endl; break;
        case 2014: cout << "The year 2014 means you are Confident" << endl; break;
        case 2015: cout << "The year 2015 means you are Visionary" << endl; break;
        case 2016: cout << "The year 2016 means you are Giving" << endl; break;
        case 2017: cout << "The year 2017 means you are Analytical" << endl; break;
        case 2018: cout << "The year 2018 means you are Strong-Willed" << endl; break;
        case 2019: cout << "The year 2019 means you are Imaginative" << endl; break;
        case 2020: cout << "The year 2020 means you are Resilient" << endl; break;
        case 2021: cout << "The year 2021 means you are Forward-Thinking" << endl; break;
        case 2022: cout << "The year 2022 means you are Balanced Leader" << endl; break;
        case 2023: cout << "The year 2023 means you are Creative Thinker" << endl; break;
        default:
            cout << "Invalid year." << endl;
        }

        cout << endl;
        cout << "Would you like to try another one? (Y/N): ";
        cin >> repeat;
        cout << endl;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
