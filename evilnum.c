


#include <stdio.h>

int main()
{
   int e;
   printf("Enter a number : ");
   scanf("%d",&e);
   
   int num,count=0;
   while(e>0){
      num=e%2;
      e=e/2;
      if(num==1){
          count++;
      }
   }
   if(count%2==0){
       printf("evil");
   }
   else
   {
       printf("not evil");
   }
    return 0;
}