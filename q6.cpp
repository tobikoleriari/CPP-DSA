#include <iostream>
using namespace std;

int main(){
    int size;
    size = 5;
    double array[size];
    int sum;
    double average;

cout << "Enter " << size << " numbers: ";
for (int i=0; i<size ; i++){
    cin >> array[i];
    sum = sum + array[i];
}
cout << "Sum: " << sum << endl;
cout << "Average: " << sum/size << endl;
return 0;

}