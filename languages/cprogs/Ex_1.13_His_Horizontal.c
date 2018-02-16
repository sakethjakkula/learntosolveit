/**
 *
 * Print a horizontal histogram of words in the input.
 *
 **/

#include<stdio.h>

#define SP 10
int main()
{
int c,nc=0,i=0,stat=0;

while((c = getchar()) != EOF)
{
if(c == ' ' || c == '\t' || c == '\n')
{
if(stat)
{
for(i=0;i<(SP-nc);i++)
putchar(' ');
for(;nc >0;--nc)
printf("=");
putchar('\n');
stat =0;
}
}
else
{
stat=1;
putchar(c);
nc++;
}
}
return 0;
}


