#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int radius;
    cout << "Enter radius of the sphere: ";
    cin >> radius;
    cout << "Volume of the sphere: " << (4.0/3.0) * M_PI * pow(radius, 3) << endl;
    return 0;
}