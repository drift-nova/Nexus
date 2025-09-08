#include <stdio.h>
int main (){

int m[10],i,n=0;

printf ("enter :");

for(i=0;i<10;i++){
scanf("%d",&m[i]);
}

for(i=0;i<10;i++){
if(m[i]%2!=0){
n++;}
}

printf("odd nums : %d",n);

return 0;
}
