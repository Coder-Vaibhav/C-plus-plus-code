#include<stdio.h>
#include<string.h>
void main()
{
int i=0,flag=0,m;
char s[10][10] ={"if","else","goto","continue","return","auto","break"},st[10];
printf("\n enter the string :");
gets(st);

while(i<sizeof(s[i]))  //always print sizeof is 10 for s[i] i.e. i is any no.
{
m=strcmp(st,s[i]);  //return 0 if both word matched
if(m==0){
	flag=1;
	break;
}
else{
	flag = 0;
}
i++;
}

if(flag==1)
{
printf("\n it is a keyword");
}
else{
printf("\n it is not a keyword");
}
getch();
}



