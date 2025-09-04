#include <stdio.h>
int main(){

int saan[10],i;
printf("enter nums :");

for (i=0;i<10;i++){
scanf("%d",&saan[i]);
}

printf("negative nums :");

for(i=0;i<10;i++){
if (saan[i]<0){

printf("%d",saan[i]);
}
}

return 0;
}
