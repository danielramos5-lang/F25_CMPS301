#include <iostream>
using namespace std;

int main() {
    // 1. Define time spent on each activity in minutes
    int sleep = 8 * 60;           // 8 hours
    int classes = 6 * 60;         // 6 hours
    int homework = 3 * 60;        // 3 hours
    int meals = 1 * 60 + 30;      // 1 hr 30 min
    int gym = 2 * 60;             // 2 hours
    int fun = 1 * 60;             // 1 hour
    int commuting = 1 * 60;       // 1 hour
    int other = 4 * 60;           // 4 hours

    // 2. Total productive and leisure time
    int productive_minutes = classes + homework + gym;
    int leisure_minutes = fun + meals;
    int total_minutes = 1440; // total minutes in a day
    int unplanned_minutes = total_minutes - (sleep + productive_minutes + leisure_minutes + commuting + other);

    // 3. Convert minutes to hours and minutes for each category
    int sleep_h = sleep / 60;
    int sleep_m = sleep % 60;
    int classes_h = classes / 60;
    int classes_m = classes % 60;
    int homework_h = homework / 60;
    int homework_m = homework % 60;
    int meals_h = meals / 60;
    int meals_m = meals % 60;
    int gym_h = gym / 60;
    int gym_m = gym % 60;
    int fun_h = fun / 60;
    int fun_m = fun % 60;
    int commuting_h = commuting / 60;
    int commuting_m = commuting % 60;
    int other_h = other / 60;
    int other_m = other % 60;

    int productive_h = productive_minutes / 60;
    int productive_m = productive_minutes % 60;
    int leisure_h = leisure_minutes / 60;
    int leisure_m = leisure_minutes % 60;
    int unplanned_h = unplanned_minutes / 60;
    int unplanned_m = unplanned_minutes % 60;

    // 4. Calculate productive percentage
    double percent_productive = (productive_minutes / 1440.0) * 100;

    // 5. Display summary
    cout << "24-Hour Day Activity Summary" << endl;
    cout << "Sleep:\t\t" << sleep_h << "h " << sleep_m << "m" << endl;
    cout << "Classes:\t" << classes_h << "h " << classes_m << "m" << endl;
    cout << "Homework:\t" << homework_h << "h " << homework_m << "m" << endl;
    cout << "Meals:\t\t" << meals_h << "h " << meals_m << "m" << endl;
    cout << "Gym:\t\t" << gym_h << "h " << gym_m << "m" << endl;
    cout << "Fun Time:\t" << fun_h << "h " << fun_m << "m" << endl;
    cout << "Commuting:\t" << commuting_h << "h " << commuting_m << "m" << endl;
    cout << "Other:\t\t" << other_h << "h " << other_m << "m" << endl;
    cout << endl;
    cout << "Total Productive Time:\t" << productive_h << "h " << productive_m << "m" << endl;
    cout << "Total Leisure Time:\t" << leisure_h << "h " << leisure_m << "m" << endl;
    cout << "Remaining/Unplanned:\t" << unplanned_h << "h " << unplanned_m << "m" << endl;
    cout << "Percentage Productive:\t" << percent_productive << "%" << endl;

    return 0;
}
