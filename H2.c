#include <stdio.h>
int main (){

int ayna[10],i;
printf("enter nums :");

for (i=0;i<10;i++){
    scanf("%d",&ayna[i]);
}
printf("odd nums :");
for(i=0;i<10;i++){
    if(ayna[i]%2!=0){
        printf(" %d ",ayna[i]);
    }
}

return 0;
}
