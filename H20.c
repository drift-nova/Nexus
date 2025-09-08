//in the name of Allah
#include <stdio.h>
int main (){

int uff[5];
int teri = 0 ;
int adaa = 0 ;
float average;

printf ("enter = ");
for (int i = 0 ; i <5 ; i++){
scanf("%d",&uff[i]);
teri += uff[i];}

average = teri / 5 ;

for (int i =0;i<5;i++){
if (uff[i]>average){
adaa++;}}

printf ("average = %.2f",average);
printf ("Count of nums greater than average = %d",adaa);

return 0 ;
}
