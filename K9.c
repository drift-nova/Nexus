//in the name of Allah
#include<stdio.h>
      void main (){

      int mad[3]={1,2,3};
      int max = mad [0];

      for (int i=0;i<3;i++){
      if(mad[i]>max){
      max=mad[i];
      }}
      printf("largest = %d ",max);

      }
