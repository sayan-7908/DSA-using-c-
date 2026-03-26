#include <iostream>
using namespace std;

int main(){
    int a,b,add,sub,mul,div;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    

    cout << "Add of two number: " << add << endl;
    cout << "sub of two number: " << sub << endl;
    cout << "mul of two number: " << mul << endl;
    cout << "div of two number: " << div << endl;

    return 0;

}