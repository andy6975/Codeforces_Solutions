#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int number_of_dominoes = 0;
    number_of_dominoes = (m * n) / 2;
    cout << number_of_dominoes << endl;

    return 0;
}