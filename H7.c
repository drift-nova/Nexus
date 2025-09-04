#include <stdio.h>

int main() {

    int x[10];
    printf("enter nums :");
    for (int i=0;i<10;i++){
        scanf("%d",&x[i]);
    }
for (int i = 0;i<10;i++){
    if(x[i]<0){
        x[i]=0;
    }
}
printf("modified nums :");
for (int i=0;i<10;i++){
    printf("\n%d",x[i]);
}
    return 0;
}
