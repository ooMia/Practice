#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 전체 input문자열을 저장하는 char 배열
char data[0x5000][0x10] = { 0, };

// 전체 input문자열을 저장하고 출력하기
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

enum Operation {    // 열거형 정의
    push = 0, pop, size, empty, top
};
// 첫째 줄에 주어지는 명령의 수 N(1 ≤ N ≤ 10, 000)이 주어진다.
// 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다.
// 주어지는 정수는 1보다 크거나 같고, 100000보다 작거나 같다.
// 문제에 나와있지 않은 명령이 주어지는 경우는 없다.


// push X: 정수 X를 스택에 넣는 연산
void push(int X) {}

// pop : 스택 top의 정수를 빼고, 그 수를 출력한다. 스택 비어있으면 -1 출력
int pop() {}

// size : 스택에 들어있는 정수 개수
int size() {}

// empty : 스택이 비어있으면 1, 아니면 0을 출력한다.
int empty() {}

// top : 스택의 가장 위에 있는 정수를 출력. 스택 비어있으면 -1 출력
int top() {} 


*/