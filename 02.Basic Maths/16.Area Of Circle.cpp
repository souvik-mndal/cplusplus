// WAP to calculate the area of a circle.
// Input: 5
// Output: Area of circle: 78.5

#include <iostream>
using namespace std;

double areaOfCircle(int radius) {
    return 3.14 * radius * radius;
}

int main() {
    int radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;

    double area = areaOfCircle(radius);
    cout << "Area of circle: " << area << endl;

    return 0;
}
