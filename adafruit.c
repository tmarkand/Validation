#include <stdio.h>
#include <conio.h>

/* Add function */
void add (int a, int b)
{
  int c = 0;
  c = a + b;
  return;
}

void sub (int a, int b)
{
	int c = a - b;
	return;
}

void mult (int a, int b)
{
	int c = a * b;
	return;
}
#------------------------
# Main Function template
#-------------------------
int main(void)
{
  int a=b=10;
  add(a,b);
  sub(a,b);
  mult(a,b);
  return 0;
}
