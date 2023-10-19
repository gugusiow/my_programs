#include <iostream>

using namespace std;

int main() {
    int year = 0;
        cout << "Enter the year: ";
        cin >> year;                        //takes input
    
    if(year < 1000 || year > 9999) {        //checks if the input year is a 4-digit number
        cout << "Please enter a 4-digit year. 😠😡";

    } else if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {   //criteria for a leap year
        cout << year << " is a leap year! 😎😋\n";
    } else {
        cout << year << " is not a leap year 😪😥...\n";
    }

return 0;
}
