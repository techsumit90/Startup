#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose an operation to perform:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << (num1 + num2) << endl;
            break;
        case 2:
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case 3:
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result: " << (num1 / num2) << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option (1-4)." << endl;
            break;
    }

    return 0;
}
