//in the name of Allah
#include <stdio.h>
void main (){

int elon,musk,tesla=0;

for (elon=0;elon<7;elon++){
scanf("%d",&musk);

if(musk<0){
continue;}

tesla+=musk;
}
printf("sum = %d ",tesla);

}
