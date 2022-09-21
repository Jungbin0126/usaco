

#include <iostream>



int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    { 
        if(i==3 or i==6 or i==9)
        {
            
            printf("X ");
            continue;
        }
        printf("%d ",i);
    }
}

