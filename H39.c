//in the name of Allah
// Shift Elements Right: Read an array of 5 integers. Shift all elements one position to
//the right (the last element is lost, the first element becomes 0).

#include <stdio.h>
    void main ()    {

int verasaa[5],verasa;

printf("Paththavaikkum =");
for(verasa=0; verasa<5; verasa++){
scanf("%d",&verasaa[verasa]);
}

for(verasa=4; verasa>0; verasa--){
verasaa[verasa]=verasaa[verasa-1];
}
verasaa[0]=0;

printf("lesaa lesaa =");
for(verasa=0; verasa<5; verasa++){
printf(" %d ",verasaa[verasa]);}

}
