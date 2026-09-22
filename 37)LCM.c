#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; ; i++)
    {
        if ((a * i) % b == 0)
        {
            lcm = a * i;
            break;
        }
    }

    printf("%d\n", lcm);

    return 0;
}