// WAP to convert temperature between Celsius and Fahrenheit.
// Input: 100 CtoF
// Output: Converted temperature: 212
// Input: 212 FtoC
// Output: Converted temperature: 100

#include <iostream>
using namespace std;

double convertTemperature(double temp, string conversionType) {
    double ans;
    if (conversionType == "CtoF") {
        ans = ((9 * temp) / 5) + 32;
    } else {
        ans = ((temp - 32) * 5) / 9;
    }
    return ans;
}

int main() {
    double temp;
    string conversionType;

    cout << "Enter temperature: ";
    cin >> temp;
    cout << "Enter conversion type (CtoF or FtoC): ";
    cin >> conversionType;

    double result = convertTemperature(temp, conversionType);
    cout << "Converted temperature: " << result << endl;

    return 0;
}
