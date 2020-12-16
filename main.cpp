#include <iostream>
#include "complexclass.h"

using namespace std;

int main() {
    ComplexClass value1(5, 2);
    ComplexClass value2(3, -3);

    cout << value1 << "; " << value2 << endl;
    cout << "Addition: " << value1 + value2 << endl;
    cout << "Subtraction: " << value1 - value2 << endl;
    cout << "Multiplication: " << value1 * value2 << endl;
    cout << "Division: " << value1 / value2 << endl;

    value1 = value2;
    cout << "After =" << endl;
    cout << value1 << " = " << value2 << endl;

    return 0;
}