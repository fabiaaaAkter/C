#include<stdio.h>

int main(){

  int i,j,n;
  scanf("%d",&n);
  i=0;
    while(i<n){
      j=0;
       while(j<n){
         if(i==j){
         printf(" x");
         }
    else if(i==1&&j||j-i==2){
      printf(" x");
    }
    else if(i-j==4||j-i==4){
      printf(" x");
    }
    else{
            printf(" 1");
    }

          j++;

    }

      printf("\n");
   i++;

  }

}


