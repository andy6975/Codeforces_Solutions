#include <iostream>

#define NUM_CHARS 256

using namespace std;

int main()
{
    string input; char c;
    cin >> input;

    int count = 0;

    int characters[NUM_CHARS] = {0};

    char *ptr = &input[0];

    for (int i=0; i<input.length(); i++)
    {
        c = *(ptr+i);
        characters[int(c)]++;
    }

    for (int j=0; j<input.length(); j++)
    {
        c = *(ptr+j);
        if (characters[int(c)] >= 1)
        {
            count++;
            characters[int(c)] = 0;
        }
    }
    
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }

    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;    
}