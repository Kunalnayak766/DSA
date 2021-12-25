#include <stdio.h>
#include <stdlib.h>
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
    if (num <= 0)
    {
        return 0;
    }

    if (Is_prime(num))
        return 1;

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
    int num, size = 1, i = 0, prety = 0, Not_prety = 0;
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
        if (Is_pretty(num))
        {
            prety++;
        }
        else
        {
            Not_prety++;
        }

    } while (num != 0);

    printf("%d %d", prety, Not_prety);

    return 0;
}
