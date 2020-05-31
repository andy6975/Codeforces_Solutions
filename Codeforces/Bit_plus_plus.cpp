#include <iostream>

using namespace std;

int main()
{
    int n, output = 0;
    string command;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> command;
        if (command[0] == '+' || command[2] == '+')
        {
            output++;
        }
        else
        {
            output--;
        }
    }
    cout << output << endl;
    return 0;
}