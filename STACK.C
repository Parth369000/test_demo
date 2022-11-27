#include<stdio.h>
#include<conio.h>
int s[100];
int top=-1,n,x,ch;
void push();
void pop();
void peep();
void change();
void display();
void main()
{
	clrscr();
	printf("enter size of stack[max:100]:");
	scanf("%d",&n);
	do
	{
		clrscr();
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.peep");
		printf("\n4.change");
		printf("\n5.display");
		printf("\n6.exit");
		printf("\n enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				push();
				break;
			}
			case 2 :
			{
				pop();
				break;
			}
			case 3:
			{
				peep();
				break;
			}
			case 4:
			{
				change();
				break;
			}
			case 5 :
			{
				display();
				break;
			}
			case 6:
			{
				exit(0);
				break;

			}
		}
	}while(ch<=6);
	}
	

	void display()
	{
			int i;
			if(top==-1)
			{
				printf("\n stack is empty");
				getch();
				return;
			}
			printf("\n\t\t|%4d|<--top",s[top]);
			for(i=top-1;i>=0;i--)
			{
				printf("\n\t\t|%4d|",s[i]);
			}
			getch();
	}
	void push()
	{
		if(top==n-1)
		{
		printf("\n stack is overflow");
		
		getch();
		return;
		}
	top++;
	printf("enter value to insert in to stack:");
	scanf("%d",&x);
	s[top]=x;
	printf("after inserting %d in to satck:\n",x);
	display();
	}
	void pop()
	{
		if(top==-1)
		{
			printf("\n stack is underflow on pop");
			getch();
			return;
		}
		printf("\n after pop the elemnt %d stack is:\n",s[top]);
		top--;
		if(top==-1)
		{
			printf("stack is empty");
			getch();
		}
		else
		{
			display();

		}
	}
	void peep()
	{
		printf("\n eneter position:");
		scanf("%d",&x);
		if(top-x+1<=-1)
		{
			printf("\n stack is underflow on peep");
			getch();
			return;
		}
		display();
		printf("\n %d is at %dth position from top",s[top-x+1],x);
		getch();
	}
	void change()
	{
		int temp;
		printf("\n enter position:");
		scanf("%d",&x);
		if(top-x+1<=-1)
		{
			printf("\nstack is underflow on peep");
			getch();
			return;
		}
		printf("enter value you want to change");
		scanf("%d",&temp);
		s[top-x+1]=temp;
		printf("\n %d is replaced at %dth position from top",s[top-x+1],x);
		display();
	}
