
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#define N 2
#define ABS(x) (abs(x) + abs(y) + abs(z))
#define SUM(x, y) (2 * x + y)
#define RIZNYCA(x, y) (2 * y - z)
#define SQR(y) (y) * (y)
#define CUB(x) (x) * (x) * (x)
#define MIN(left,right) ((left)<(right))?(left):(right) 
#define MAX(left,right) ((left)>(right))?(left):(right) 
#define PRINTI(w) puts("Value"); \
 printf(#w"= %d\n",w)
#define PRINTR(w) puts ("Result: "); \
  printf (#w "=% f \ n",(float)w)

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    puts("Lab 13.2. Using macros and preprocessing directive");
    int x, y, z,
        left, right, // auxiliary variables
        result; // minimum (maximum) between two (three) numbers
    char ch;
    do
    {
#if 1 < N && N < 3
        puts("Determine the maximum number between the three ");
        puts("Enter 3 numbers (x,y,z)");
        scanf_s("%d", &x);
        PRINTI(x);
        scanf_s("%d", &y);
        PRINTI(y);
        scanf_s("%d", &z);
        PRINTI(z);
        left = ABS(x);
        right = CUB(left);

        result = MIN(left, right);
        PRINTR(result);
        puts("Repeat? y /n "); ch = _getch();
#else //N > 3
        {
            puts("Find the minimum among the two");
            puts("Enter 3 numbers (x,y,z)");
            scanf_s("%d", &x);
            PRINTI(x);
            scanf_s("%d", &y);
            PRINTI(y);
            scanf_s("%d", &z);
            PRINTI(z);
            left = SUM(x, y);
            right = RIZNYCA(x, z);
            right = SQR(left);

            result = MAX(left, right);
            PRINTR(result);
            puts("continue? (y/n) "); ch = _getch(); }
#endif 
    } while (ch == 'y' || ch == 'Y');
}