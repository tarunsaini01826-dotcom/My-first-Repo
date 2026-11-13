#include<stdio.h>
int main()
{   
    int x;
    printf("input x either 1,2 or 3:");
    scanf("%d", &x);
    switch(x)
    {
        case 1:
        printf("this is case 1\n");
        break;
        case 2:
        printf("thiss is case 2\n");
        break;
        case 3:
        printf("this is case 3\n");
        break;
        default:
        printf("input only either 1,2 or 3\n");
    }
    return 0;
}


// this is cmt