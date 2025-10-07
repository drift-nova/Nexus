//in the name of Allah
// Count Unique Elements: Read an array of 10 integers (may have duplicates).
//Count how many unique numbers are in the array.
#include <stdio.h>
void main (){

int a[10],i,j,x=0,y;

printf("enter =");
for(i=0; i<10; i++){
scanf("%d",&a[i]);
}
for(i=0; i<10; i++){
y=1;

for(j=0; j<10; j++){
if(i!=j && a[i]==a[j]){
y=0;
break;}}

if(y){
x++;
}}
printf("unique count = %d",x);

}
