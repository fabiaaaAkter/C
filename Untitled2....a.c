#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,num[n][n],j;

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        scanf("%d",&num[i][j]);
      }

    }
    for(i=0;i<n;i++){
      for(j=0;j<n
      ;j++){
        if(n%2==1&&n/2==i&&n/2==j){
      num[i][j]=1;
      printf("%d  ",num[i][j]);

    }
        else if(i==j||i+j==n-1){
          num[i][j]=0;
          printf("%d  ",num[i][j]);
        }


        else{
          printf("%d  ",num[i][j]);
        }
      }
      printf("\n");

    }
}

