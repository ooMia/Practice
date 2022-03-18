#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stack[10001], sp = -1;

void push(int X) { stack[++sp] = X; }
int size() { return sp + 1; }
int empty() { return (sp == -1); }
int top() { return empty() ? -1 : stack[sp]; }
int pop() { return empty() ? -1 : stack[sp--]; }

int main()
{
    int argc, temp;
    char argv[20];

    scanf(" %d", &argc);

    for (int i = argc; i > 0; --i)
    {
        scanf(" %s", argv);

        switch (argv[0])
        {
        case 'p':
            if (argv[1] == 'u') { scanf(" %d", &temp); push(temp); break; }
            printf("%d\n", pop()); break;
        case 's': printf("%d\n", size()); break;
        case 'e': printf("%d\n", empty()); break;
        case 't': printf("%d\n", top()); break;
        default: break;
        }
    }
    return 0;
}



/*

// 하나씩 입력받고 하나씩 처리하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

int stack[10000], stackPointer = -1;

void push(int X) { stack[++stackPointer] = X; }
int size()  { return stackPointer + 1; }
int empty() { return (stackPointer == -1); }
int top()   { return empty() ? -1 : stack[stackPointer]; }
int pop()   { return empty() ? -1 : stack[stackPointer--]; }

int main()
{
    int argc, temp;
    char argv[20];

    scanf(" %d", &argc);
    assert(1 < argc && argc < 10000);

    for (int i = argc; i > 0; --i)
    {
        scanf(" %s", argv);

        switch (strcmp(argv, "push"))
        {
        case 00: scanf(" %d", &temp); assert(1 <= temp && temp <= 100000); push(temp); break;
        case -1: printf("%d\n", !strcmp(argv, "pop") ? pop() : empty()); break;
        case +1: printf("%d\n", !strcmp(argv, "size") ? size() : top()); break;
        default: break;
        }

        assert(stackPointer >= -1);
    }
    return 0;
}

*/



/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[0x3000] = { -1, };
int stackPointer = -1;

void push(int X) { stack[++stackPointer] = X; }
int size() { return stackPointer + 1; }
int empty() { return (stackPointer == -1); }
int top() { return empty() ? -1 : stack[stackPointer]; }
int pop() { return empty() ? -1 : stack[stackPointer--]; }

int argc;
char argv[20000][8];

int main()
{
    scanf(" %d", &argc);

    int n = 0;
    while (1)
        if (scanf(" %s", argv[n++]) == EOF)
            break;

    for (int i = 0; i < n-1; ++i)
    {
        switch (strcmp(argv[i], "push"))
        {
        case 00:
            push(atoi(argv[++i]));
            break;
        case -1:
            printf("%d\n", !strcmp(argv[i], "pop") ? pop() : empty());
            break;
        case +1:
            printf("%d\n", !strcmp(argv[i], "size") ? size() : top());
            break;
        default:
            break;
        }
    }

    return 0;
}
*/