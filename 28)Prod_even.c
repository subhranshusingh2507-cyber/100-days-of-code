#include <stdio.h>

int main()
{
    int n;
    int product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("%d\n", product);

    return 0;
}