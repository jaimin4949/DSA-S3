#include <stdio.h>

int top = -1;
int ar[9];
void push();
void pop();
void show();

int main()
{
    int num;

    while (1)
    {
        printf("\n1.Push Ball\n2.Pop Ball\n3.Show Ball\n4.End");
        printf("\n\nEnter the num: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid");
        }
    }
}

void push()
{
    int x;

    printf("\nEnter the element to push: ");
    scanf("%d", &x);
    top = top + 1;
    ar[top] = x;
}

void pop()
{

    printf("\nPopped element: %d", ar[top]);
    top = top - 1;
}

void show()
{
    printf("\nElements present in the stack: \n");
    for (int i = top; i >= 0; --i)
    {
        printf("%d\n", ar[i]);
    }
}