//in the name of Allah
#include <stdio.h>
int main (){

int tokyo[10];
int i ;
int all = 1 ;

printf("enter nums =");
for (i=0;i<10;i++){
scanf("%d",&tokyo[i]);}

for (i=0;i<10;i++){
if (tokyo[i]<=0){
all=0;
break;
}}

if(all)
{printf("All positive\n");}

return 0;
}
