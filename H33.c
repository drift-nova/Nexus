//in the name of Allah
//Separate Even and Odd: Read an array of 10 integers. Create two new arrays, one
//for even numbers and one for odd numbers. Print both new arrays.
#include<stdio.h>
void main(){

int a[10],e[10],o[10],i,ec=0,oc=0;

printf("enter =");
for(i=0; i<10; i++){
scanf("%d",&a[i]);

if(a[i]%2==0){
e[ec++]=a[i];
}
else{
o[oc++]=a[i];
}
}
printf("even =");
for(i=0; i<ec; i++){
printf(" %d",e[i]);
}
printf("\nodd =");
for(i=0; i<oc; i++){
printf(" %d",o[i]);
}

}
