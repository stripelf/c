#include<stdio.h>


void foo()
{
   int arry[3];
   int i;
   for(i=0;i<=3;i++)
   {
       arry[i]-=4;
       printf("%d\n",i);
   }
   
}
void bar()
{
   int i;
   int arry[3];
   for(i=0;i<=3;i++)
   {
     arry[i]=0;
     //printf("%p\n",&arry[i]);
     //printf("%p\n",&i);
   } 
}	

void main(){
   foo();
}
