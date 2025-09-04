#include<stdio.h>
int main()
{
    int n1,n2,n3;
    n1=0
    n2=1
    printf("enter a number:");
    scanf("%d", &num)
    if(num== 0 || num ==1) {
        printf("%d is in the fibonacci series.\n", num);
        return 0;
    }
    for(i = 2; i <13; i++) {
        n3 = n1 +n2;
        if(n3 == num) {
            found = 1;
            break;
              }
    }
    printf("\nTotal tickets booked: %d\n", nt);
    if (nt >= 5)
    {
        bill = cost - (cost * 0.05);
        printf("Total bill after discount: %f\n", bill);
    }
    else
    {
        printf("Total bill: %f\n", cost);
    }
}