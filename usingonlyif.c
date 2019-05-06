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
                if(a<c)
                         printf("%d is the biggest.",c);
        }
        if(b>a)
        {
                if(b>c)
                         printf("%d is the biggest.",b);
                if(b<c)
                         printf("%d is the biggest.",c);
        }
return 0;
}

