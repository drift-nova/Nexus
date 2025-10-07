//in the name of Allah
//Merge Two Arrays: Read two arrays of size 5 each. Create a third array of size 10
//and merge the two arrays into it.

#include <stdio.h>
         void main () {


     int nami[5], robin[5], i, tanjiro[10];

     printf("5 elements for nami =");
     for(i=0; i<5; i++){
     scanf("%d",&nami[i]);
     }

       printf("5 elements for robin =");
     for(i=0; i<5; i++){
     scanf("%d",&robin[i]);
     }

     for(i=0; i<5; i++){
     tanjiro[i]=nami[i];
     }
     for(i=0; i<5; i++){
     tanjiro[i+5]=robin[i];
     }

     printf("merged array =");
     for(i=0; i<10; i++){
     printf("%d\n ",tanjiro[i]);
     }

         }
