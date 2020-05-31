#include <iostream>

using namespace std;

int main()
{
    int i; long li; char ch; float f; double lf;
    scanf("%d %ld %c %f %lf", &i, &li, &ch, &f, &lf);
    printf("%d \n%ld \n%c \n%0.3f \n%0.9lf \n", i, li, ch, f, lf);
    return 0;
}