#include<stdio.h>
int main ()
{
    double cost_price,selling_price,profit,loss;
    scanf("%d%d",&cost_price,&selling_price);
    if(selling_price>cost_price){
        profit=selling_price -cost_price;
        printf("profit =%d",profit);

    }
    else{
        loss=cost_price-selling_price;
        printf("loss=%d",loss);
    }
   return 0;
}
