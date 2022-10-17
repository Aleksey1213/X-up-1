#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int n, S, i, x;
    S = 0;

    cout << "Введите количество чисел:";
    cin >> n;

    i = 0;

    while (i < n)
    {
        cout << "Введите число:";
        cin >> x;

        if (x > 10) {
            S = S + x;
            i += 1;
        }
    }

    cout << "Сумма чисел, больших 10:" << S << endl;

    return 0;
}