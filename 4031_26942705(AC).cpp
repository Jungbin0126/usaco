

#include <iostream>



int main()
{   
    int max=0, max1=0;
    for(int i=1; i<=7; i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2!=0 and a>max)
        {
            max=a;
            
        }
        if(a%2==0 and a>max1)
        {
            max1=a;
        }
        
    }
    printf("%d",max+max1);
   


}

