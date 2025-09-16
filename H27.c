//in the name of Allah
#include <stdio.h>
int main (){

int pk[10];
int i;
printf("enter =");

for (i=0;i<10;i++){
scanf("%d",&pk[i]);
}

if(pk[0]==pk[9]){
printf("same");}

else {
printf("Different");
}

return 0; }
