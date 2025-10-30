//in the name of Allah
//Print a Specific Row: Read a 3x3 matrix. Ask the user for a row number (0, 1, or 2)
//and print all elements in that row.

#include <stdio.h>
   void main ()     {

int goku[3][3],row,i,j;

printf("enter = ");
for(i=0; i<3; i++){
for(j=0; j<3; j++){
    scanf("%d",&goku[i][j]);
}}

printf("enter row num (0, 1, or 2) = ");
    scanf("%d",&row);

if(row>=0 && row<3){
printf("Elements in row %d = ",row);
for(j=0; j<3; j++){
printf(" %d ",goku[row][j]);
}
}
else{
printf("!nvalid");}

   }
