//in the name of Allah
#include <stdio.h>
int main (){

int m[7],n=0;
printf("enter =");

for (int i = 0 ; i<7 ;i++){
scanf("%d",&m[i]);
}
for (int i = 0 ; i<7 ;i++){
if (m[i]%2==0){
n += m[i];}}

//n=n+m[i];

printf ("sum of even nums = %d",n);
return 0;
}
