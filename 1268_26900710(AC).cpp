﻿

#include <iostream>



int main()
{
    int n,t,sum=0;
   
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&t);
        if(t%2==0)
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
    
    
}


