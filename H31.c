//in the name of Allah
#include<stdio.h>
void main (){

int srk[10],i,don1,don2;

printf("enter nums =");
for(i=0;i<10;i++){
scanf("%d",&srk[i]);
}
if(srk[0]>srk[1]){
don1=srk[0];
don2=srk[1];
}
else{
don1=srk[1];
don2=srk[0];
}
for(i=0;i<10;i++){
if(srk[i]>don1){
don2=don1;
don1=srk[i];
}
else if (srk[i]>don2){
don2=srk[i];
}}
printf("Second Largest:%d",don2);

}
