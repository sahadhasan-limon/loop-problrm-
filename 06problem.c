#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Input the table number start from 1 ");
    scanf("%d", &n);

    printf("Multiplication table from 1 to %d\n", n);
      for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d x %d = %d\t", j, i, j * i);
        }
        printf("\n");
    }



    return 0;

    
}
