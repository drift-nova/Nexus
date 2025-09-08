//in the name of Allah
#include <stdio.h>
int main (){
int red[7];
int bull;

printf("enter = ");

for (int i = 0 ; i < 7 ; i ++){
scanf("%d",&red[i]);}

bull = red [0];
for (int i =0;i<7;i++){
if ( red [i] > bull){
bull = red[i];}}

printf ("max num = %d",bull);

return 0;
}
