#include <stdio.h>

int fibonacci_sum_even(int limit)
{
int sum = 0;
int first = 1;
int second = 2;
int next;

while (first <= limit)
{
if (first % 2 == 0)
{
sum += first;
}

next = first + second;
first = second;
second = next;
}

return (sum);
}

int main(void)
{
int limit = 4000000;
int sum = fibonacci_sum_even(limit);

printf("%d\n", sum);

return (0);
}
