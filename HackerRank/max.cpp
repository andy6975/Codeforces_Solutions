#include <iostream>
#include <limits>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int max = -1 * std::numeric_limits<int>::max();
    if (a > max) { max = a; }
    if (b > max) { max = b; }
    if (c > max) { max = c; }
    if (d > max) { max = d; }
    
    return max;    
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = max_of_four(a, b, c, d);
    printf("%d\n", max);
    return 0;
}