//in the name of Allah
#include <stdio.h>
int main (){

int naach[7];
int meri;
int jaan;

printf ("enter =");
for (int i = 0 ; i<7;i++){
scanf("%d",&naach[i]);}

meri = naach [0];
jaan = 0;
for (int i=0;i<7;i++){
if(naach[i]>meri){
meri = naach[i];
jaan = i ;}}

printf ("largest value is at index =%d",jaan);

return 0 ;}
