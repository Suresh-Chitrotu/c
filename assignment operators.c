#include<stdio.h>
void main()
{
	int x=10,y=2;
	x+=y;//12 10
	x-=y;//10 2
	y*=x;//10 20
	x%=y;//0 20
	printf("%d %d",x,y);
	
}
