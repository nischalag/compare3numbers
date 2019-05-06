#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Enter the 3 numbers:\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
                if(a>c)
                        printf("%d is the biggest.",a);
                else(a<c)
                         printf("%d is the biggest.",c);
        }
        else(b>a)
        {
                if(b>c)
                         printf("%d is the biggest.",b);
                else(b<c)
                         printf("%d is the biggest.",c);
        }
return 0;
}
