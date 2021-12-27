#include <stdio.h>
int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    int num;
    do
    {
        scanf("%d", &num);
        printf("%d\n", num);
    } while (num != 0);

    printf("kuanl ");
    return 0;
}