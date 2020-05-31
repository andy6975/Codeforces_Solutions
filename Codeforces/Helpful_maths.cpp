#include <iostream>
#include <sstream>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    string input;
    int length, count_of_nums;
    cin >> input;

    length = input.length();
    count_of_nums = int(length / 2) + 1;

    stringstream convert(input);

    int * ptr = new (nothrow) int [count_of_nums];

    for(int i=0; i<length; i+=2)
    {
        convert >> *(ptr+(i/2));
    }
  
    sort(ptr, ptr+count_of_nums); 

    for(int j=0; j<count_of_nums; j++)
    {
        cout << *(ptr+j);
        if (j != count_of_nums - 1)
        {
            cout << '+';
        } 
    }

    cout << endl;

    delete[] ptr;

    return 0;
}