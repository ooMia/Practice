#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

double getResponseTime(int (*fp)(int, int*), int N, int* data);
int getMin(int n, int* arr);
int getMax(int n, int* arr);

int main()
{
    // Variables
    int N; // number of numbers
    int data[100]; // array of numbers
    int flag; // 0: getMin // 1: getMax
    int (*flagOption[2])(int, int*) // function pointer
        = { getMin, getMax };       // : choose a type of function

    // 0. RUN
    // 1. get the number of numbers
    while(!scanf(" %d", &N));
    
    // 2. read/write & print all given numbers
    for (int i = 0; i < N; ++i) while (!scanf(" %d", &data[i]));
    for (int i = 0; i < N; ++i) printf("%d ", data[i]); puts("");
    
    // 3. choose a function to activate
    while(!scanf(" %d", &flag));
    
    // 4. print response time
    // while print a result of the function
    printf("%lf\n", getResponseTime(flagOption[flag], N, data));

    // 5. EXIT
    return 0;
}

double getResponseTime(int (*fp)(int, int*), int N, int* data)
{
    clock_t start = clock();
    printf("%d\n", fp(N, data));
    clock_t finish = clock();
    return (double)(finish - start) / CLOCKS_PER_SEC;
}

int getMin(int n, int* arr)
{
    switch (n)
    {
        case 1: return arr[0];
        case 2: return arr[0] < arr[1] ? arr[0] : arr[1];
        default:
        {
            int a = getMin(n / 2, arr);
            int b = getMin(n - n / 2, arr + n / 2);
            return a < b ? a : b;
        }
    }
}
int getMax(int n, int* arr)
{
    switch (n)
    {
        case 1: return arr[0];
        case 2: return arr[0] > arr[1] ? arr[0] : arr[1];
        default:
        {
            int a = getMax(n / 2, arr);
            int b = getMax(n - n / 2, arr + n / 2);
            return a > b ? a : b;
        }
    }
}