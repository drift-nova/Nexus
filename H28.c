//in the name of Allah
#include <stdio.h>
int main (){

int zo [5],ro=1,i;
printf("enetr =");

for (i=0;i<5;i++){
scanf("%d",&zo[i]);
}
for (i=0;i<5;i++){
if(zo[i]<zo[i-i]){
ro=0;
break;
}}

if(ro){
printf("\nsorted");
}
else {
printf("not sorted");
}

return 0;
}
