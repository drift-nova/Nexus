//in the name of Allah
#include <stdio.h>
int main (){

int h[10],a,m=0;

printf("enter :");

for (a=0;a<10;a++){
scanf("%d",&h[a]);
}
for(a=0;a<10;a++){
if(h[a]>0){
m++;}}

printf("pos nums : %d",m);

return 0;
}
