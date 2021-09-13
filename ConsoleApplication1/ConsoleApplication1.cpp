
#include <stdio.h>

int main()
{
    int x;
    scanf_s("%d", &x);
    if (x % 2 == 1)
    {
        for (int i = 1; i <= x ; i++)
        {
            if (i == 1) {
                for (int i = 0; i < x / 2; i++)
                {
                    printf("_");
                }
                printf("*");
                for (int i = 0; i < x / 2; i++)
                {
                    printf("_");
                }
                printf("\n");
            }
            // 1
            if (i > 1 && i <= x /2) {
                for (int j = 0; j < x / 2 - (i - 1); j++)
                {
                    printf("_");
                }
                printf("*");
                for (int k = 0; k < 2 * (i - 1)-1; k++)
                {
                    printf("_");
                }
                printf("*");
                for (int j = 0; j < x / 2 - (i - 1); j++)
                {
                    printf("_");
                }
                printf("\n");
            }
            // body
            if (i==x/2+1)
            {
                printf("*");
                for (int l = 0; l < x-2; l++)
                {
                    printf("_");
                }
                printf("*");
                printf("\n");
            }
            //leg
            if (i> x/2+1 && i<x)
            {
                for (int j = 0; j < (i-x/2)-1; j++)
                {
                    printf("_");
                }
                printf("*");
                for (int k = 0; k <2*(x-i)-1; k++)
                {
                    printf("_");
                }
                printf("*");
                for (int j = 0; j < (i - x/2 )-1; j++)
                {
                    printf("_");
                }
                printf("\n");
            }
            if (i == x) {
                for (int i = 0; i < x / 2; i++)
                {
                    printf("_");
                }
                printf("*");
                for (int i = 0; i < x / 2; i++)
                {
                    printf("_");
                }
                printf("\n");
            }
            
        }
        
       
    }
    return 0;
}
