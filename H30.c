//in the name of Allah
#include<stdio.h>
void main (){

int camel ,benson ,malboro ,lucky = 0 ;
scanf ("%d",&camel);

benson=camel;
while(benson!=0){

malboro=benson%10;
lucky=lucky*10+malboro;
benson=benson/10;
}
if(lucky==camel){
printf("Palindrome");}

else {
printf("not a Palindrome");}
}

