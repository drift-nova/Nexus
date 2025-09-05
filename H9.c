#include <stdio.h>
int main (){

int a[10];
int i;
int n;
int f=0;
printf("enter :");
for (i=0;i<10;i++){
scanf("%d",&a[i]);
}
printf("enter the number to find :");
scanf("%d",&n);

for(i=0;i<10;i++){
if(a[i]==n){
f=1;
break;
}}

if (f)
printf("found\n");
else
printf("not found\n");


return 0;}
