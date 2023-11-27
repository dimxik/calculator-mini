#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double num1, num2, result;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Выберите операцию (+, -, *, /): ";
    cin >> operation;

    cout << "Введите второе число: ";
    cin >> num2;

    if (operation == '+') {
        result = num1 + num2;
    }
    else if (operation == '-') {
        result = num1 - num2;
    }
    else if (operation == '*') {
        result = num1 * num2;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << "Ошибка: деление на 0 запрещено." << endl;
            return 1; // Возвращаем ненулевой код ошибки
        }
    }
    else {
        cout << "Ошибка: неверная операция." << endl;
        return 1; // Возвращаем ненулевой код ошибки
    }

    cout << "Результат: " << result << endl;

    return 0;
}