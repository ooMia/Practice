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
push X: ���� X�� ť�� �ִ� �����̴�.
pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ť�� ����ִ� ������ ������ ����Ѵ�.
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
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