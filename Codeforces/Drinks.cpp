#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n, p;
    cin >> n;

    double percentages = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        percentages += p;
    }

    double final_fraction = (percentages / (n * 100)) * 100;

    cout << setprecision(10) << final_fraction << endl;
    
    return 0;
}