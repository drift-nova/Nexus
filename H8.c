#include <stdio.h>
int main(){

int fasana[10],i;
printf("enter :");
for(i=0;i<10;i++){
    scanf("%d",&fasana[i]);
}
for(i=0;i<10;i++){
    if(fasana[i]%2==0){
        fasana [i] = 1;
    } else {
    fasana [i]=0;}
}
printf("modified :");
for(i=0;i<10;i++){
    printf("\n%d",fasana[i]);
}

return 0;
}
