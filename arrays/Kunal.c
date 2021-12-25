#include <stdio.h>
int main()
{

    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d", x, y);

    return 0;
}