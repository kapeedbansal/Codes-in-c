#include <stdio.h>
#include <string.h>
#define max 10
int i;
struct stack
{
	int a[max];
	int top;
};

void display(struct stack *d)
{

	for(i=d->top;i>=0;i--)
	printf("%d\n", d->a[i]);
}

void Top(struct stack *t)
{
	if (t->top == -1)
	{
		printf("stack is Empty\n");
	}
	else
		printf("%d\n",t->a[t->top]);
}
void push(struct stack *push)
{
	if (push->top == (max-1))
	{
		printf("stack is full\n");
	}
	else
	{
		push->top++;
		printf("\nenter the element insert into stack\n");
		scanf("%d", &push->a[push->top]);
}
}

void pop(struct stack *pop)
{
	if (pop->top == -1)
	{
		printf("stack is Empty\n");
		}
	else
	{
		printf("%d\n", pop->a[pop->top]);
		pop->a[pop->top]=0;
		pop->top--;
		}
}
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct stack m;
	m.top = -1;
	int ch;
	while(1)
	{

		printf("enter the choice\n 1: push\n 2: pop\n 3: print Stack\n 4: Print Top\n 5: Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
		case 1:
				push(&m);
				break;
		case 2:
				pop(&m);
				break;
		case 3:
				display(&m);
				break;
		case 4:
				Top(&m);
				break;
		case 5:
				return 0;
		}
	}

}
