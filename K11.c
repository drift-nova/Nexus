//in the name of Allah
#include <stdio.h>
    void main (){

    int b=137,m,w=0;
    while(b!=0){

    m=b%10 ;
    w=w*10+m ;
    b=b/10 ;
    }
    printf("Uno Reverse = %d ",w);
    }
