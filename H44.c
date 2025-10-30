//in the name of Allah
// Print a Specific Column: Read a 3x3 matrix. Ask for a column number and print all
//elements in that column.

#include <stdio.h>
 void main (){

 int stereo[3][3],love,i,j;

 printf("enter = ");
 for(i=0; i<3; i++){
 for(j=0; j<3; j++){
    scanf("%d",&stereo[i][j]);
    }}

printf("enter (0, 1, or 2) = ");
scanf("%d",&love);

if(love>=0 && love < 3){
printf ("Column %d = ",love);
for(i=0; i<3; i++){
printf(" %d ",stereo[i][love]);
}
printf("\n");
}
else {printf("!nvalid");}

 }
