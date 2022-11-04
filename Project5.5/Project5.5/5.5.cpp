#include <iostream>
#include <cmath>

using namespace std;
int Func_1(double a, double d, int n)
{
    return (a + (n - 1) * d);

}
double Sum(double a, double d, int n)
{
    if (n > 0) {
        return a + Sum(a + d, d, n - 1);
    }
    return 0;
}
int f(double a, double d, int n)
{
    if (n > d)
        return 2;
    else
        return 1;
}
int main()
{
    int a;
    int d;
    int n;
    cout << "a1 = "; cin >> a;
    cout << "d = "; cin >> d;
    cout << "n = "; cin >> n;
    cout << "an = " << Func_1(a, d, n) << endl;
    cout << "S = " << Sum(a, d, n) << endl;
    cout << "DL = " << f(a, d, n) << endl;
    return 0;
}
