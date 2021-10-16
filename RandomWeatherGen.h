//
// Created by Aaron Belyeu on 10/15/2021.
//

#ifndef HEY_RANDOMWEATHERGEN_H
#define HEY_RANDOMWEATHERGEN_H
#include <iostream>
using namespace std;


//A function using a random number generator
class Weather
{
private:
    int day, month;

public:
    Weather();
    int getDay(int d);
    int getMonth(int m);
    void PrintWeather();


};
Weather::Weather() {}

void Weather::PrintWeather()
{

    cout << "Welcome to your friendly weather program.\n"
         << "Enter today's date as two integers for the month " <<
         "and the day:\n";

    cin >> month;
    cin >> day;

    srand(month * day);

    int prediction;
    char ans;

    cout << "Weather for today:\n";
    do{
        prediction = rand() % 3;
        switch (prediction)
        {
            case 0:
                cout << "The day will be sunny!!\n";
                break;
            case 1:
                cout << "The day will be cloudy.\n";
                break;
            case 2:
                cout << "The day will be stormy!\n";
                break;
            default:
                cout << "Weather program is not " <<
                     "functioning properly. \n";
        }
        cout << "Want the wather for the next day? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "That's it from your 24-hour weather programs.\n";
}



#endif //HEY_RANDOMWEATHERGEN_H
