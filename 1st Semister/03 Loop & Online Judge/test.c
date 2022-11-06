#include <stdio.h>
int main(){
    int long long n, k;
    scanf("%lld %lld", &n, &k);
    printf("%lld\n",(k-1)*2%n+1+(n%2?0:2*k>n));

	return 0;
}
