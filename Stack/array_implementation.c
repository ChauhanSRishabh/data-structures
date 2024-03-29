#include <stdio.h>
#include <stdlib.h>

// STACK - ARRAY BASED IMPLEMENTATION

#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    A[++top] = x;
}

void Pop()
{
    if (top == -1)
    {
        printf("Error : No element to pop\n");
        return;
    }
    top--;
}

int Top()
{
    return A[top];
}

void Print()
{
    printf("Stack : ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    Pop(); Print();
    Push(12); Print();
    printf("Element at top is : %d\n",Top());
    return 0;
}