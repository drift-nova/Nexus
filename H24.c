//in the name of Allah
#include <stdio.h>
int main (){

int ai[7];
int oi;
int ei;
int i ;

printf("enter =");

for (i=0;i<7;i++){
scanf("%d",&ai[i]);}

oi = ai[0];
ei = 0 ;

for (i=0;i<7;i++){
if(ai[i]<oi){
oi = ai[i];
ei =i;}}

printf("index of the smallest value = %d",ei);

return 0; }
