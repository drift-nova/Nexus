//in the name of Allah
#include <stdio.h>
int main (){

int s[3],i,t=0;
printf("enter = ");
for (i=0;i<3;i++){
scanf("%d",&s[i]);}

for(i=0;i<3;i++){
if(s[i]>0){
t+=s[i];}}

printf("sum of pos nums = %d",t);

return 0;
}
