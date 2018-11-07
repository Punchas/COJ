#include <stdio.h>
#include <string.h>
int main()
{
	char x[50];
	int cont=0, cont2=0, cont3=0, cont4=0, cont5=0, i;
	while(scanf("%c", &x)!=EOF)
	{
		for(i=0; i<=strlen(x)-1; i++)
		{
			if(x[i]=='a'||x[i]=='A')
			{
				cont++;
			}
			if(x[i]=='e'||x[i]=='E')
			{
				cont2++;
			}
			if(x[i]=='i'||x[i]=='I')
			{
				cont3++;
			}
			if(x[i]=='o'||x[i]=='O')
			{
				cont4++;
			}
			if(x[i]=='u'||x[i]=='U')
			{
				cont5++;
			}
		}
	}
printf("%d %d %d %d %d\n", cont, cont2, cont3, cont4, cont5);
}
