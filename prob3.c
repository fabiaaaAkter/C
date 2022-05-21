#include<stdio.h>

int main()
{
    int A,B,i,x,j,k,temp,d;
    scanf("%d",&x);
    for(i=0; i<x; i++ )
    {

        scanf("%d%d",&j,&k);
        if(j>k){
            temp = j;
            j = k;
            k = temp;
        }
        d = j;
        A=0;
        for(j;j<=k;j++)
        {
            A=A+j;

        }
    }
    printf("Case 1: %d %d\n",A,d);


}
