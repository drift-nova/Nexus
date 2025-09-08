//in the name of Allah
#include <stdio.h>
int main (){

int nami [9],robin , i;
printf ("enter =");

for (i=0;i<9;i++){
scanf("%d",&nami[i]);}

robin = nami [0];

for (i=0;i<9;i++){
if (nami[i<robin]){
robin = nami [i];}}

printf (" minimum value = %d",robin);

return 0;
}
