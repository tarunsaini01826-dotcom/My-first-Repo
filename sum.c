#include <stdio.h>

int main()
{
    int x;

    printf("Input x either 1, 2 or 3: ");
    scanf("%d", &x);

    switch(x)
    {
        case 1:
            printf("This is case 1\n");
            break;

        case 2:
            printf("This is case 2\n");
            break;

        case 3:
            printf("This is case 3\n");
            break;

        default:
            printf("Input only either 1, 2 or 3\n");
    }

    return 0;
}