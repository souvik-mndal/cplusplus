// WAP to convert distance from kilometers to miles.
// Input: 5
// Output: Distance in miles: 3.10686

#include <iostream>
using namespace std;

double convertKmToMiles(int km) {
    double miles = km * 0.621371;
    return miles;
}

int main() {
    int km;
    cout << "Enter distance in kilometers: ";
    cin >> km;

    double miles = convertKmToMiles(km);
    cout << "Distance in miles: " << miles << endl;

    return 0;
}
