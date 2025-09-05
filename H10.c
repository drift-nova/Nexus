#include <stdio.h>
int main (){

int sise[10];
int i;
int even=0 ;
printf("enter nums :");
for(i=0;i<10;i++){
scanf("%d",&sise[i]);
}
for(i=0;i<10;i++){
if(sise[i]%2==0){
even=1;
break;}}
if(even){
printf("even");}
else {
printf("odd");
}
return 0;
}
