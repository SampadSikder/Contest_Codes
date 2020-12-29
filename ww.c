#include<stdio.h>
#include<string.h>
typedef long long ll;

int main()
{
	ll i,n,q,a[10000000], b[1000000],count[1000000];
	scanf("%ll",&n);
	for(i=0;i<n;i++)
		{
			scanf("%ll",&a[i]);
		}
	scanf("%d",&q);
	for(i=0;i<q;i++)
		{
			scanf("%ll",&b[i]);
		}
	memset(a, 0, n*sizeof(count[0]));

  	int max = a[0];
  	for (int i = 1; i < q; i++)
  		 {
    		if (a[i] > max)
      		max = a[i];
  		 }
	for (int i = 0; i < q; i++)
	     count[a[i]]++ ;

	for(i=0;i<q;i++)
		{
			printf("%ll",count[i]);
		}
}
