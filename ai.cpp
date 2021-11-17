#include<stdio.h>
#include<Windows.h>
int main()
{
	for(float y=1.5F;y>-1.5F;y-=0.1F)
	{
		for(float x=-1.5;x<1.5F;x+=0.05f)
		{
			float a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<0,0F?'x';' ');
		}
		Sleep(100);
		putchar('\n');
	}
	getchar();
	return 0;
}