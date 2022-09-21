
#include<stdio.h>
 
int main()
{
    
    int n,k;
    scanf("%d %d",&n, &k);
    int s = 1;
    for(int i = 1; i<= k; i++){
        s*= n;
    }
 
    printf("%d",s);
    return 0;
}
