#include <stdio.h>

void print_fibonacci_sequence(int n)
{
int prev = 1;
int curr = 2;
int count = 2;

printf("%d, %d", prev, curr);

while (count < n)
{
int next = prev + curr;
printf(", %d", next);
prev = curr;
curr = next;
count++;
}

printf("\n");
}

int main(void)
{
int n = 98;
print_fibonacci_sequence(n);
return (0);
}
