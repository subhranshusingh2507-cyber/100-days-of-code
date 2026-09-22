#include <stdio.h>

int main()
{
    int i, j, mat[3][3];

    printf("Enter the elements of the matrix:\n");
 // Input matrix elements
    for(i = 0; i < 3; i++){
for(j = 0; j < 3; j++){
    scanf("%d", &mat[i][j]);
      }
    }
    printf("The elements of the matrix are:\n");
    // Display matrix
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
     printf("%d\t", mat[i][j]);
        }
    printf("\n");
    }

    return 0;
}