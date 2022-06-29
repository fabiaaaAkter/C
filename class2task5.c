#include<stdio.h>
int main()
{
    int arif,fahmid,joy;
    scanf("%d%d%d",&arif,&fahmid,&joy);
    if(arif<fahmid&&arif<joy){
        printf("arif is the youngest");
    }
    else if(fahmid<arif&&fahmid<joy){
        printf("fahmid is the youngest");
    }
    else{
        printf("joy is the youngest");
    }
  return 0;


}
