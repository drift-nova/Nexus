#include <stdio.h>
int main (){

int mitwa[10],i;
printf("enter nums :");

for(i=0;i<10;i++){
scanf("%d",&mitwa[i]);
}
printf("positive nums :");
for(i=0;i<10;i++){
if(mitwa[i]>0){
printf(" %d ",mitwa[i]);
}
}
return 0;
}
