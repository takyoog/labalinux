#include <iostream>
using namespace std;

int main() {
    double a, h;
    
    cout << "Сколько см основание треугольника = ";
    cin >> a;
    cout << "Сколько см высоту треугольника = ";
    cin >> h;
    
    double area = 0.5 * a * h;
    cout << "Площадь вашего треугольника равна = " << area << endl;

    return 0;
}
