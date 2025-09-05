//In the name of Allah
#include<stdio.h>
int main (){

int coco[10],i,malang=0;
printf("enter :");
for (i=0;i<10;i++){
scanf("%d",&coco[i]);
if (coco[i]%2==0){
malang++;
}}
printf("Count of even numbers :\n%d",malang);

return 0;
}
