#include <iostream>
using namespace std;

int EUCLIDES(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 0;
        *y = 1;
        return a;
    }
 
    int x1, y1;
    int MCD = EUCLIDES(b,a%b, &x1, &y1);
 
    *x = y1 - (a/b) * x1;
    *y = x1;
 
    return MCD;
}

int main()
{
    int x, y, a, b, mcd;
    a = 128;
    b = 134;
    mcd = EUCLIDES(a, b, &x, &y);
    cout << "MCD = (" << mcd << ", " << x
         <<", " << y << ")" << endl;
    a = 311;
    b = 337;
    mcd = EUCLIDES(a, b, &x, &y);
    cout << "MCD = (" << mcd << ", " << x
         <<", " << y << ")" << endl;
    a = 991;
    b = 997;
    mcd = EUCLIDES(a, b, &x, &y);
    cout << "MCD = (" << mcd << ", " << x
         <<", " << y << ")" << endl;
    return 0;
}
 