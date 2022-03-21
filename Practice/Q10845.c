#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int queue[2], front = -1, back = -1;

int empty() {}
void push(int X) {}
int pop() {
    if (empty()) return -1;
    if (size() == 1) return 
    queue[front];
    size() == 1 ? front = back = -1;

}
int size() { return back - front + 1; }

int top() {}



//push pop size empty front back
/*
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/
/*
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
*/