#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, n;
    cin >> a >> b;

    n = log(b / a) / log(1.5);

    cout << int(n) + 1 << endl;

    return 0;    
}