//in the name of Allah
// Find Common Elements: Read two arrays of size 5 each. Find and print the
//elements that exist in both arrays.
#include <stdio.h>
void main(){

int alan[5],walker[5],i,j;

printf("alan =");
for(i=0; i<5; i++){
scanf("%d",&alan[i]);
}
printf("walker =");
for(i=0; i<5; i++){
scanf("%d",&walker[i]);
}
for(i=0; i<5; i++){
for(j=0; j<5; j++){
if(alan[i]==walker[j]){
printf(" %d ",alan[i]);
break;
}}}

}
