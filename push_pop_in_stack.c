Write a program in C to implement PUSH and POP in stack using dynamic array.

#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int num;
    struct stack*next;

};
struct stack*top=NULL;s

int main()
{
    push();
    display();
    pop();
    display();
    return 0;
}
void push()
{
    struct stack*p;
    int n,ch;
    printf("\n How Many Values want to enter");
    scanf("%d",&ch);
    while(ch>0)
        {
            printf(" Enter the values");
    scanf("%d",&n);
    p=(struct stack*)malloc(sizeof(struct stack));
    p->num=n;
    p->next=NULL;
    if(top==NULL)
        top=p;
    else{
        p->next=top;
        top=p;
    }
    ch--;
        }
}

void pop()
{
	int ch;
    struct stack*p;
    printf("Enter How many Values want remove");
    scanf("%d",&ch);
    while(ch>0)
        {
            p=top;
    printf("%d",p->num);
    top=top->next;
    free(p);
    if(top==NULL)
    {
        printf("underflow");
    }
    else{

    }
    ch--;
        }
}
void display()

 {
     struct stack*p;
     p=top;
     while(p!=NULL)
     {
         printf("%d",p->num);
         p=p->next;
     }

}
