#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double num1, num2, result;
    char operation;

    cout << "������� ������ �����: ";
    cin >> num1;

    cout << "�������� �������� (+, -, *, /): ";
    cin >> operation;

    cout << "������� ������ �����: ";
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
            cout << "������: ������� �� 0 ���������." << endl;
            return 1; // ���������� ��������� ��� ������
        }
    }
    else {
        cout << "������: �������� ��������." << endl;
        return 1; // ���������� ��������� ��� ������
    }

    cout << "���������: " << result << endl;

    return 0;
}