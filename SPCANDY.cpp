
 #include <stdio.h>
    int main()
    {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int n,k;
    scanf("%lld %lld", &n, &k);
    if(n==0 and k==0)
    printf("%lld %lld\n", 0LL, 0LL);
    else if(n>0 and k==0)
    printf("%lld %lld\n", 0LL, n);
    else
    printf("%lld %lld\n",n/k, n%k);
    }
    return 0;
    } 
