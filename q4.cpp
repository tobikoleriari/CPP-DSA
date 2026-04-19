#include <iostream>
#include <cctype>
using namespace std;

void isUpperCase(char c){
    if(isupper(c)){
        cout << c << " is uppercase"<<endl;
    }
    else {
        cout << c << " is not uppercase" << endl;
    }
    
}
 int main(){
    char c;
    cout<< "Enter a character: ";
    cin >> c;
    isUpperCase(c);
    return 0;
 
 }