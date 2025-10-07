//in the name of Allah
#include <stdio.h>
void main (){

int s[10],s1,s2;

printf ("enter =");
for(int i=0; i<10 ; i++){
scanf("%d",&s[i]);
}
if(s[0]<s[1]){
s1=s[0];
s2=s[1];
}
else{
s1=s[1];
s2=s[0];
}
for(int i=2; i<10 ; i++){
if(s[i]<s1){
s2=s1;
s1=s[i];
    }
else if(s[i]<s2){
s2=s[i];
}
    }
printf("Second smallest = %d ",s2);

}
