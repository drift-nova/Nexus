//in the name of Allah
#include <stdio.h>
int main (){

int a[7] , i , fe=-1;
printf("enter num =");

for (i=0;i<7;i++){
scanf("%d",&a[i]);
}

 for (i=0;i<7;i++){
 if(a[i]%2==0){
 fe=a[i];
 break;
 }}

 if (fe!=-1){
 printf("found,%d",fe);}

 else {
 printf("not found");
 }

return 0;
}
