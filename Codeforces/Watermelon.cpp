#include <iostream>

using namespace std;

int main()
{
    int weight = 0;
    string result;
    cin >> weight;
    (weight == 2 || weight % 2 != 0)? result="NO":result="YES";
    cout << result;
    return 0;
}