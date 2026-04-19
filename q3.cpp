#include <iostream>

using namespace std;
double area (double length) {
    return length * length;
}
double perimeter(double length){
    return length *4;
}

int main (){
double length;
cout <<"enter the length of the square: ";  
cin >> length;
cout << "Area = " << area(length) << endl;
cout << "Perimeter = " <<perimeter(length) << endl; 
return 0;
}