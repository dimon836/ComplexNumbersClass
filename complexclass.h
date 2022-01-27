//
// Created by Dima on 16.12.2020.
//

#ifndef PHYSICALPROG_COMPLEXCLASS_H
#define PHYSICALPROG_COMPLEXCLASS_H

#include <iostream>

using namespace std;

class ComplexClass {
    double re{}, im{}; // целая и мнимая части

public:
    ComplexClass() : re(0), im(0) {};
    ComplexClass (double r) : re(r), im(0) { }
    ComplexClass (double , double );
    ComplexClass (ComplexClass &c);

    ~ComplexClass() = default;

    // Модуль комплексного числа
    double abs() const;

    // Перегрузки операторов
    ComplexClass & operator = (const ComplexClass &c)  = default;
    ComplexClass operator + (ComplexClass &c) const;
    ComplexClass operator - (ComplexClass &c) const;
    ComplexClass operator * (ComplexClass &c) const;
    ComplexClass operator / (ComplexClass &c) const;

    friend ostream &operator<<(ostream &, const ComplexClass &); // перегрузка оператора <<
    friend istream &operator>>(istream &, const ComplexClass &); // перегрузка оператора >>

};


#endif //PHYSICALPROG_COMPLEXCLASS_H
