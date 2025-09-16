//in the name of Allah
#include <stdio.h>
int main (){

int i ,chammak[10] ,challo;

printf("enter nums =");

for (i=0;i<10;i++){
scanf("%d",&chammak[i]);
}

if(3>1){
challo=chammak[0];
chammak[0]=chammak[9];
chammak[9]=challo;
}

for (i=0;i<10;i++){

printf("\n%d ",chammak[i]);
}

return 0;}
