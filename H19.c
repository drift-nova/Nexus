//in the name of Allah
#include <stdio.h>
int main ()
{

int s [11];
int n ;
int c = 0 ;

printf ("enter = ");

for (int i = 0 ; i <11 ; i++){

scanf("%d",&s[i]);

}
printf ("search = ");
scanf("%d",&n);

for (int i = 0 ; i <11 ; i++){
if (s[i]==n){
c++;}
}

printf("match found = %d times ",c);

return 0 ;

}
