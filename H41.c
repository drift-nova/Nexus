//in the name of Allah
// Read and Print a 3x3 Matrix: Read 9 integers and store them in a 3x3 matrix. Print
//the matrix in a grid format.
#include <stdio.h>
void main (){

int goku[3][3],i,j;

printf("enter = ");
for(i=0; i<3; i++){
for(j=0; j<3; j++){
scanf("%d",&goku[i][j]);
}}

printf("\n matrix =\n");
for(i=0; i<3; i++){
for(j=0; j<3; j++){
printf("%d\t",goku[i][j]);
}
printf("\n");
}

}
