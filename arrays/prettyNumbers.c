#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int Is_NumislesThanThree(int num)
{
    if (num < 3)
        return 1;
    else
        return 0;
}
int Is_prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int Is_pretty(int num)
{

    if (num % 2 == 0)
    {
        return Is_pretty(num / 2);
    }

    if (num % 3 == 0)
    {
        return Is_pretty(num / 3);
    }

    if (num == 1)
        return 1;

    return 0;
}

int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    int num,
        size = 1, i = 0, prety = 0, Not_prety = 0;
    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));
    do
    {
        scanf("%d", &num);
        ptr[i] = num;
        size++;
        i++;
        ptr = realloc(ptr, size * sizeof(int));
    } while (num != 0);
    i = 0;

    do
    {
        num = ptr[i];

        if (Is_NumislesThanThree(num))
        {
            Not_prety++;
           
        }
        else if (Is_prime(num))
        {
            prety++;
           
        }
        else if (Is_pretty(num))
        {
            prety++;
           
        }
        i++;
    } while (num != 0);

    printf("%d %d", prety, Not_prety);

        return 0;
}