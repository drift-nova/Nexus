#include <stdio.h>
int main(){

int milk[10],i;

printf("enter :");

for(i=0;i<10;i++){

scanf("%d",&milk[i]);
}
printf("ans :");

for (i=0;i<10;i++){

if(milk[i]%5==0){

printf("\n%d",milk[i]);
}
}
return 0;
}
