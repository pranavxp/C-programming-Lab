//program for postfix evaluation
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 50
int stack[N];
char post[N];
int top=-1;
int pwr(int x,int y)
{
	int i,z=1;
	for(i=0;i<y;i++)
	{
		z=z*x;
	}
	return z;
}
void push(int n)
{
	if(top<N-1)
	stack[++top]=n;
}
int pop()
{
	int n;
	if (top>-1)
	{
		n=stack[top];
		stack[top--]=-1;
		return n;		
	}
}

int main()
{
	int i,a,b,value;
	char ch;
	for(i=0;i<N;i++)
		stack[i]=-1;
printf("Enter the postfix expression\n");		
scanf("%s",post);
for(i=0;post[i]!='\0';i++)
{
	ch=post[i];
	if(isdigit(ch))
		push(ch-'0');
	else if (ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'||ch== '%')	
	{
		b=pop();
		a=pop();
		switch(ch)
		{
			case'+':value=a+b;
				break;
			case'-':value=a-b;
				break;
			case'*':value=a*b;
				break;
			case'/':value=a/b;
				break;
			case'^':value=pwr(a,b);
				break;	
			case'%':value=a%b;
				break;			
		}
		push(value);
	}
}
printf("Value=%d\n",pop());
}
