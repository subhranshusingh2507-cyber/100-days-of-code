#include <stdio.h>

int main()
{
    int rows, cols, i, j, sum = 0;
    int arr[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}