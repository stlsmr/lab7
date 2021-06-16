#include <iostream>
using namespace std;

void func(double &a, double &b, double &c)
{
    int mas[3], tmp;
    a = mas[0], b = mas[1], c = mas[2];
    for (int k = 0; k < 2; k++) {
        for (int j = 0; j < 3 - k - 1; j++) {
            if (mas[j] > mas[j + 1]) {
                tmp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = tmp;
            }
        }
    }
    a = mas[0], b = mas[1], c = mas[2];
}

int main()
{
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout<< "Напишите и протестируйте функцию, которая принимает в качестве аргументов\n"
           "адреса трех переменных double и помещает наименьшее значение в первую\n"
           "переменную, среднее значение — во вторую, а наибольшее значение — в третью.\n";
    cout << "Enter numbers\n";
    cin >> a >> b >> c;
    func(a, b, c);
    cout << a << " " << b << " " << c;
    return 0;
}