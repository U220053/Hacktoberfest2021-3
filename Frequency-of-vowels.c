#include<stdio.h>
void main(){
	int x=0,a=0,e=0,i=0,o=0,u=0,A=0,E=0,I=0,O=0,U=0,total;
char str[30];
printf("enter a string");
gets(str);
for(x=0;str[x];x++){
	if(str[x]=='a')
	a++;
	if(str[x]=='e')
	e++;
	if(str[x]=='i')
	i++;
	if(str[x]=='o')
	o++;
	if(str[x]=='u')
	u++;
	if(str[x]=='A')
	A++;
	if(str[x]=='E')
	E++;
	if(str[x]=='I')
	I++;
	
	if(str[x]=='O')
	O++;
	if(str[x]=='U')
	U++;
}
printf("frequency of a:%d\n",a);
printf("frequency of e:%d\n",e);
printf("frequency of i:%d\n",i);
printf("frequency of o:%d\n",o);
printf("frequency of u:%d\n",u);
printf("frequency of A:%d\n",A);
printf("frequency of E:%d\n",E);

printf("frequency of I:%d\n",I);
printf("frequency of O:%d\n",O);
printf("frequency of U:%d\n",U);
}
