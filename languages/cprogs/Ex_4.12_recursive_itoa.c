/* recursive version of itoa; that converts an integer string by calling a recursive routine */

#include<stdio.h>
#include<math.h>

#define MAXLEN 100

void itoa(int n,char s[]);


int main(void)
{
	int n;
	char s[MAXLEN];

	n = 1723;

	itoa(n,s);

	printf("%s",s);

	return 0;
}

int i=0;
void itoa(char s[],int n)
{
if(n <0)
{
n=-n;
s[i++]='-';
}

if(n/10>0)
itoa(s,n/10);

s[i++]=n%10+'0';
s[i]='\0';

}
