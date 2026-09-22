#include <stdio.h>

int main()
{
    int n, i, value, pos;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element: ");
    scanf("%d", &value);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > value)
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}