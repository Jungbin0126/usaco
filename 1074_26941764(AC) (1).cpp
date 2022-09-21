

#include <iostream>



int main()
{
    int a;
    scanf("%d",&a);
    int s=a;
    printf("%d ",a);
    while(true)
    {
        s=s-1;
        
        if(s==0)
        {
            break;
        }
    
        printf("%d ",s);
        
    }
}

