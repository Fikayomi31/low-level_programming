#include <stdio.h>

int main() 
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing elements of the matrix
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 4; j++)
	{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

