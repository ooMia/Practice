#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ��ü input���ڿ��� �����ϴ� char �迭
char data[0x5000][0x10] = { 0, };

// ��ü input���ڿ��� �����ϰ� ����ϱ�
void test1()
{
    int N; scanf(" %d", &N);
    for (int i = N; i > 0; --i) { scanf(" %s", data[i]); printf("%s\n", data[i]); }
}



int main()
{
    test1();
}








/*

void doOperation()
{
    scanf
}
int getOperationNumber(char)

enum Operation {    // ������ ����
    push = 0, pop, size, empty, top
};
// ù° �ٿ� �־����� ����� �� N(1 �� N �� 10, 000)�� �־�����.
// ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����.
// �־����� ������ 1���� ũ�ų� ����, 100000���� �۰ų� ����.
// ������ �������� ���� ����� �־����� ���� ����.


// push X: ���� X�� ���ÿ� �ִ� ����
void push(int X) {}

// pop : ���� top�� ������ ����, �� ���� ����Ѵ�. ���� ��������� -1 ���
int pop() {}

// size : ���ÿ� ����ִ� ���� ����
int size() {}

// empty : ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
int empty() {}

// top : ������ ���� ���� �ִ� ������ ���. ���� ��������� -1 ���
int top() {} 


*/