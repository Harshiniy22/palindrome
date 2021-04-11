#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,rem,rev=0,p;    
    scanf("%d",&n);    
    p=n;    
    while(n>0)    
   {    
     rem=n%10;    
     rev=rev*10+rem;    
     n=n/10;    
    }    
if(p==rev)    
printf("Yes");    
else    
printf("Not");   
}
