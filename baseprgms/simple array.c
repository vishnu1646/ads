#include<stdio.h>
int main()
{
    int val[5];
    int i;
    for( i = 0;i<5;i++)
    {
        printf("plz enter array elements :");
        scanf("%d",&val[i]);
    }
    for(i = 0;i<5;i++)
    printf("\n Array element are :%d",val[i]);
}
