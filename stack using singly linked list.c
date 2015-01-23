#include<stdio.h>
#include<stdlib.h>

struct stack{
	int data;
	struct stack *node;
};

struct stack *top =NULL;

int push()
{
	struct stack *pu = (struct stack *)malloc(sizeof(struct stack *));

		pu->node = top;
		printf("Enter the data to be inserted\n");
		scanf("%d", &pu->data );
		top = pu;

	return 0;
}

int pop()
{
	struct stack *po;
	if (top == NULL)
				printf("Enter stack is empty\n");
		else
			{
			po = top;
			printf("%d\n",po->data);
			top = po->node;
			free(po);
			}
	return 0;
}

int display()
{
	struct stack *temp;
	temp = top;
	if (temp==NULL)
		printf("nothing to display\n");
	else
	{
		while(temp!=NULL)
		{
		printf("%d\n", temp->data);
		temp= temp->node;
		}
	}
	return 0;
}

int Top()
{
	printf("%d\n", top->data);
	return 0;
}
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);
		int ch;
		while(1)
		{

			printf("enter the choice\n 1: push\n 2: pop\n 3: print Stack\n 4: Print Top\n 5: Exit\n");
			scanf("%d", &ch);
			switch(ch)
			{
			case 1:
					push();
					break;
			case 2:
					pop();
					break;
			case 3:
					display();
					break;
			case 4:
					Top();
					break;
			case 5:
					return 0;
			}
		}

}
