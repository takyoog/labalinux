#include <iostream>
using namespace std;

int main() {
    double a, h;

    cout << "Сколько см основание треугольника = ";
    cin >> a;
    cout << "Сколько см высоту треугольника = ";
    cin >> h;

    if (a <= 0 || h <= 0) {
        cout << "Ошибка! Основание и высота треугольника могут быть только положительными числами!" << endl;
        return 1;
    }

    double area = 0.5 * a * h;
    cout << "Площадь вашего треугольника равна = " << area << endl;

    return 0;
}
