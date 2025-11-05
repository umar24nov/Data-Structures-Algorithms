#include <iostream>
using namespace std;

void leapYear(int year){
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << year << " is a Leap Year!";
    else
        cout <<  year << " is not a Leap Year";
}

int main (){
    int year;
    cout << "Enter a Year: ";
    cin >> year;
    leapYear(year);
    return 0;
}