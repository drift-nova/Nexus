//in the name of Allah
// Alternating Sum: Read an array of 10 integers. Calculate the sum by alternating
//between adding and subtracting elements (e.g., a - a + a - a...).
#include <stdio.h>
void main (){

int a[10],s=0;

printf("enter =");
for (int i=0; i<10; i++){
scanf("%d",&a[i]);
}
for(int i=0; i<10; i++){
if(i%2==0){
s+=a[i];
}
else{
s-=a[i];
}
}

printf("alternating sum = %d ",s);

}
