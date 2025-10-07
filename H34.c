//in the name of Allah
//Sum of Two Arrays: Read two arrays, both of size 5. Create a third array where
//each element is the sum of the corresponding elements in the first two arrays.
#include <stdio.h>
void main (){

int me [5], u [5], us [5], i;

printf("enter 5 elements for me =\n");
for(i=0; i<5; i++){
scanf("%d",&me[i]);
}
printf("enter 5 elements for u =\n");
for(i=0; i<5; i++){
scanf("%d",&u[i]);
}
for(i=0; i<5; i++){
us[i]=u[i]+me[i];
}
printf("sum =\n");
for(i=0; i<5; i++){
printf("%d ",us[i]);
}

}
