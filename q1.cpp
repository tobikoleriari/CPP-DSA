#include <iostream>
using namespace std;

int main(){
    int days;
    cout << "Enter number of days: ";
    cin >> days;
    cout << "Number of seconds: " << days * 24 *60 * 60<< endl;
    return 0;
}