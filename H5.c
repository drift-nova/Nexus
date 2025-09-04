#include <stdio.h>
int main (){

int mila[10],i;
printf("enter nums :");

for (i=0;i<10;i++){
scanf("%d",&mila[i]);
}
printf("nums > 50 :");

for (i=0;i<10;i++){
if(mila[i]>50){

printf("\n%d",mila[i]);
 }
}
return 0;
}
