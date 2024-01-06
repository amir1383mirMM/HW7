#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    

public:
    Time(const string& timeStr);
    void parseTime(const string& timeStr) ;

    friend ostream& operator<<(ostream& output, const Time& t) {
        output << setfill('0') << setw(2) << t.hours << ":" << setw(2) << t.minutes << ":" << setw(2) << t.seconds;
        return output;
    }

    Time operator+(const Time& t);

};


