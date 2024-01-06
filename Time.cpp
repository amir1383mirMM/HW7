#include "Time.h"



void Time::parseTime(const string& timeStr) 
{
    char discard;
    istringstream ss(timeStr);
    ss >> hours >> discard >> minutes >> discard >> seconds;
}


Time::Time(const string& timeStr) {
    parseTime(timeStr);
}


Time Time::operator+(const Time& t) {
    Time sumTime("00:00:00");
    sumTime.seconds = seconds + t.seconds;
    sumTime.minutes = minutes + t.minutes + sumTime.seconds / 60;
    sumTime.seconds %= 60;
    sumTime.hours = hours + t.hours + sumTime.minutes / 60;
    sumTime.minutes %= 60;
    return sumTime;
}


