#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    /* Task 1 
    int seconds_in_hour = 3600;
    int minutes_in_hour = 60;
    int hours, minutes, seconds, second_in_all;

    cout << "Enter time in seconds: "; 
    cin >> second_in_all;

    cout <<  second_in_all / seconds_in_hour << " " << "Hours.\n";

    seconds = second_in_all % seconds_in_hour;

    cout << seconds / minutes_in_hour << " " << "Minutes.\n";

    cout << second_in_all % minutes_in_hour << " " << "Seconds.\n";

    */

    /* Task 2 

    float num;

    int num1;

    cout << "Enter fractional number to get money: \n";

    cin >> num;

    num1 = num;

    cout << num1 << " " << "hryvnias" << " " << (num - num1) * 100 << " " << "steps.";

    */

    /* Task 3 

    int distance, minutes, seconds, time, hour;

    distance = 1000;

    cout << "Calculating Running Speed:\n";

    cout << "Enter the distance in meters: \n";

    cin >> distance;

    cout << "Enter the time in minutes: \n";

    cin >> minutes;

    cout << "Enter the time in secondes: \n";

    cin >> seconds;

    time = (minutes * 60) + seconds;

    hour = seconds / 3600.0;

    cout << "Distance:" << " " << distance << " " << "m" << endl;

    cout << "Time:" << " " << time << " " << "seconds" << endl;

    cout << "You ran at a speed of" << " " << (distance / 1000.0) / (time / 3600.0) << " " << "km/h.";

    */

    /* Task 4 

    int days, weeks;

    cout << " Enter number of days: \n";

    cin >> days;

    cout << days / 7 << " " << "weeks";

    cout << " " << days % 7 << " " << "days.";

    */

    /* Task 5 

    int minutes, hours, seconds;
    float distance;

    cout << "Enter the distance to the airport(km): \n";
    cin >> distance; 

    cout << "Enter the time(hours, minutes, seconds): \n";
    cin >> hours >> minutes >> seconds;

    if (minutes == 0 && seconds == 0) {
        cout << distance << " " << "/" << " " << hours << " " << "=" << (distance / hours) << " " << "km/h.\n";
    }

    else {
        cout << distance << " " << "/" << " " << hours << " " << "=" << " " << distance / (hours + minutes / 60.0 + seconds / 3600.0) << " " << "km/h.\n";
    }

    */

    /* Task 6 

    int distance, consumption;

    float bensin1, bensin2, bensin3, totally;

    bensin1 = 2.0;
    bensin2 = 2.30;
    bensin3 = 1.65;

    cout << "Enter distance(km): \n";
    cin >> distance;

    cout << "Enter fuel consumption(per litr): \n";
    cin >> consumption;

    cout << "Benzin 1: 2$/L.\n";
    cout << "Benzin 2: 2.30$/L.\n";
    cout << "Benzin 3: 1.65$/L.\n";
    cout << "\n";

    totally = (distance * consumption / 100);

    cout << "Totally price of all kind of benzin by trevelling: \n\t";
    cout << "Benzin 1: " << " " << totally * bensin1 << " " << "$/L.\n\t";
    cout << "Benzin 2: " << " " << totally * bensin2 << " " << "$/L.\n\t";
    cout << "Benzin 3: " << " " << totally * bensin3 << " " << "$/L.\n\t";

    */                     

    /* Task 7

    int hours, minutes,seconds, all_seconds, remainder, total_remainder;

    cout << "Enter time in seconds: \n";

    cin >> seconds;

    all_seconds = seconds;

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    
    remainder = (86400 - all_seconds);

    hours = remainder / 3600;

    remainder = remainder % 3600;

    minutes = remainder / 60;

    seconds = remainder % 60;

    cout << "Total sum in hours, minutes, seconds: \n";
    cout << hours << " " << "hours" << " " << minutes << " " << "minutes" << " " << seconds << " " << "seconds";

    */

    /* Task 8 

    int workday = 8, seconds, hours;
    
    cout << "Enter time in seconds: \n";

    cin >> seconds;

    hours = seconds / 3600;

    hours = workday - hours;

    cout << hours << " " << "hours stayed to the end of workday.\n";

    */

}