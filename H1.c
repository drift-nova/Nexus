#include <stdio.h>

int main (){

int array [10],i;
printf ("enter nums :");

for(i=0;i<10;i++){
    scanf("%d",&array[i]);
}
printf("even nums :");
for(i=0;i<10;i++){
    if(array[i]%2==0){
    printf("\n %d ",array[i]);
  }
}

return 0;
}
