#include <stdio.h>

void PrintNumber(int n)
{
    printf("%d\n", n);
}

void PrintString(const char* s)
{
    puts(s);
}

void Example__Print__int() {}

typedef char* string;

int Fibonacci(int n);
int main();

int Fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main()
{
    int result = Fibonacci(10);
    PrintNumber(result);
    return 42;
}