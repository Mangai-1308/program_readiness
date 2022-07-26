#include<stdio.h>
	

	int main(void)
	{
	 int a1 = 1, a2 = 1, a3 = 2, sum = 0;
       int n;
	 scanf("%d",&n);
	 while (a3 < n) {
	    a3 = a1 + a2;
	    sum += a3 * !(a3%2);
	    a1 = a2;
	    a2 = a3;
	  }
	

	  printf("%u\n", sum);
	

	  return 0;
	}
	

