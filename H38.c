//in the name of Allah
// Shift Elements Left: Read an array of 5 integers. Shift all elements one position to
//the left (the first element is lost, the last element becomes 0).
#include <stdio.h>
    void main () {

int blue[5],i;

printf("enter =");
for(i=0; i<5; i++){
scanf("%d",&blue[i]);
}
for(i=0; i<4; i++){
blue[i]=blue[i+1];
}
blue[4]=0;
printf("Shifted array = ");
for(i=0; i<5; i++){
printf(" %d ",blue[i]);
}
}
