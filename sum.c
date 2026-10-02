#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    long int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%ld\n",sum);
    return 0;
}
