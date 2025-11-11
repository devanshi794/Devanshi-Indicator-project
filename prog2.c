#include <stdio.h>

void cube(int size)
{
    int arr[size][size];
    int *ptr[size][size];
    int i, j;

    printf("Enter elements in array:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
            ptr[i][j] = &arr[i][j];
        }
    }

    printf("\nCubes of all elements:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]));
        }
        printf("\n");
    }
}

int main()
{
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);
    cube(size);
    return 0;
}
