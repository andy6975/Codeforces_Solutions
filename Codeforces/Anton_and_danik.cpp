#include <iostream>

using namespace std;

int main()
{
    int n; string streak;
    cin >> n;
    cin >> streak;

    int length = streak.length();

    int count_anton = 0, count_danik = 0;

    for (int i=0; i<length; i++)
    {
        if (streak[i] == 'A')
        {
            count_anton++;
        }
        else
        {
            count_danik++;
        }
    }

    if (count_danik > count_anton)
    {
        cout << "Danik" << endl;
    }
    else if (count_anton > count_danik)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    
    return 0;
    
}