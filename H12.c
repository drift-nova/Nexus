#include <stdio.h>
int main (){

int nova[10],i,sum=0;
float rus;

printf("enter :");
for (i=0;i<10;i++){
scanf("%d",&nova[i]);

sum += nova[i];
}
rus = (float)sum / 10;

printf("average :%.2f\n",rus);

return 0;
}
