//in the name of Allah
//Sum of All Elements: Read a 3x3 matrix and calculate the sum of all its elements
#include <stdio.h>
void main (){

int goku[3][3],chichi=0,i,j;
printf("enter = ");
for(i=0; i<3; i++){
for(j=0; j<3; j++){
scanf("%d",&goku[i][j]);

chichi+=goku[i][j];
}}

printf("sum = %d\n",chichi);

}
