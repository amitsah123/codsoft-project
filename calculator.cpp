#include <iostream>

using namespace std;

int main() {
    double a, b;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> b;

    double result;

    switch (operation) {
        case '+':cout<<"Result:"<<a+b<<endl;
            result = a + b;
            break;
        case '-':cout<<"Result:"<<a-b<<endl;
            result = a - b;
            break;
        case '*':cout<<"Result:"<<a*b<<endl;
            result = a * b;
            break;
        case '/':cout<<"Result:"<<a/b<<endl;
            if (b != 0) {
                result = a / b;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; 
    }
    return 0; 
}