#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double S1, S2;
    int n, k, i;
    n = 1;
    S1 = 0;
    S2 = 0;

    while (n <= 18)
    {
        k = n;
        while (k <= 20)
        {

            S1 += sqrt(abs(1 - k / n)) / (2 * pow(n, 2) + pow(k, 2));
            k++;

        }
        S2 += S1;
        n++;
    }
    cout << S2 << endl;
    S2 = 0;
    S1 = 0;
    n = 1;
    do {
        k = n;
        do
        {
            S1 += sqrt(abs(1 - k / n)) / (2 * pow(n, 2) + pow(k, 2));
            k++;
        } while (k <= 20);
        S2 += S1;
        n++;
    } while (n <= 18);
    cout << S2 << endl;
    S2 = 0;
    S1 = 0;
    n = 1;
    for (n = 1; n <= 18; n++)
    {
        for (k = n; k <= 20; k++)
        {
            S1 += sqrt(abs(1 - k / n)) / (2 * pow(n, 2) + pow(k, 2));

        }
        S2 += S1;

    }
    cout << S2 << endl;
    S1 = 0;
    for (n = 18; n >= 1; n--)
    {

        for (k = 20; k >= n; k--)
        {
            S1 = +sqrt(abs(1 - k / n)) / (2 * pow(n, 2) + pow(k, 2));
        }
        S1 = +S1;
    }
    cout << S2 << endl;
    return 0;

}