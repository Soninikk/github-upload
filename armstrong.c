#include<stdio.h>
#include <math.h>

 int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0;i<N;i++) {

        int n,rem,sum=0,count=0,temp;
        scanf("%d",&n);
        temp=n;
        while(temp!=0){
            count++;
            temp=temp/10;
        }
        temp=n;
    while(n>0){
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(temp!=sum)
        printf("NO\n");
    else
        printf("YES\n");
    }
    return 0;
}