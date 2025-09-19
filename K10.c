//in the name of Allah
#include <stdio.h>
     void main ()
     {
     int f1=0,f2=1,f3;
     printf(" %d %d ",f1,f2);

     for(int i=2; i<10; i++){
     f3=f1+f2;

     printf("%d\n",f3);

     f1=f2;
     f2=f3;
     }
}
