#include<iostream>
using namespace std;

class DATE {
private:
    int day, month, year;

public:
    DATE(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    int daysInYear() {
        return year * 365;
    }

    int daysInMonth() {
        if (month == 2) return 28;
        else if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
        else return 31;
    }

    int totalDays() {
        return day + daysInMonth() * month + daysInYear();
    }

    int operator-(DATE d) {
        return totalDays() - d.totalDays();
    }

    DATE operator-(int days) {
        int total = totalDays() - days;
        year = total / 365;
        month = (total % 365) / 30;
        day = (total % 365) % 30;
        return *this;
    }

    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int d1, m1, y1, d2, m2, y2;

    cout << "Enter first date (dd/mm/yy): ";
    cin >> d1 >> m1 >> y1;
    DATE date1(d1, m1, y1);

    cout << "Enter second date (dd/mm/yy): ";
    cin >> d2 >> m2 >> y2;
    DATE date2(d2, m2, y2);

    if (m1 < 1 || m1 > 12 || m2 < 1 || m2 > 12) {
        cout << "Invalid month entered." << endl;
        return 1;
    }

    if (d1 < 1 || d1 > 31 || d2 < 1 || d2 > 31) {
        cout << "Invalid day entered." << endl;
        return 1;
    }

    int noOfDays = date1 - date2;
    cout << "Number of days between the two dates: " << noOfDays << endl;

    DATE newDate = date1 - noOfDays;
    cout << "New date after subtracting " << noOfDays << " days: ";
    newDate.display();

    return 0;
}