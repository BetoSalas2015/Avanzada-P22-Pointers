#include "defs.h"
#include <stdlib.h>

int a[] = {0, 1, 2, 3, 4 };

int main()
{
	int i, *p;

	for(i=0; i<=4 ; i++)
		PR(d,a[i]);
	NL;

   for(p= &a[0]; p<=&a[4]; p++)
		PR(d,*p);
	NL;NL;

	for(p=&a[0], i=1; i<=5; i++)
		PR(d,p[i]);
	NL;

	for(p=a,i=0; p+i<=a+4; p++,i++)
		PR(d,*(p+i));
	NL;NL;

   for(p=a+4; p>=a; p--)
	      PR(d,*p);
	NL;
	for(p=a+4,i=0; i<=4; i++)
		PR(d,p[-i]);
	NL;

   for(p=a+4; p>=a; p--)  
	   PR(d,a[p-a]);
	NL;


	system("pause");
	return 0;
}