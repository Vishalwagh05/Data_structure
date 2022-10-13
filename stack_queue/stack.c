#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

#define Size 4 

int Top=-1;
int arr[Size];
void Push(void);
void Pop(void);
void print(void);
void menu(void);

int main()
{
        int choice;

        while(1)
        {
                menu();
                printf("\n\nEnter the choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                        case 1: Push();
                                break;
                        case 2: Pop();
                                break;
                        case 3: print();
                                break;
                        case 4: exit(0);

                        default: printf("\nInvalid choice.");
                                 return 0;
                }
        }
}

void menu(void)
{
        printf("\n.... MENU ....");
        printf("\n1.Push\n2.Pop\n3.Print\n4.quit");

}
void Push(void)
{
        int x;

        if(Top==Size-1)
        {
                printf("\nStack is full.");
        }
        else
        {
                printf("\nEnter element to be inserted to the stack:");
                scanf("%d",&x);
                Top=Top+1;
                arr[Top]=x;
        }
}
void Pop(void)
{
        if(Top==-1)
        {
                printf("\nStack is Empty.");
        }
        else
        {
                printf("\nPopped element is :  %d",arr[Top]);
                Top=Top-1;
        }
}

void print(void)
{

        int i;
        if(Top==-1)
        {
                printf("\nStack is Empty.");
        }
        else
        {
                printf("\nElements present in the stack is : \n");
                for(i=Top;i>=0;--i)
                        printf("%d\n",arr[i]);
        }
}

