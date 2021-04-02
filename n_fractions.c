#include <stdio.h>

struct fract
{
  int num;
  int deno;
};
typedef struct fract fraction;
fraction input()
{
  fraction a;
  printf("Enter the numerator\n");
  scanf("%d", &a.num);
  printf("Enter the denominator\n");
  scanf("%d", &a.deno);
  return a;
};

fraction input_n(fraction a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("For fraction %d ", (i + 1));
    a[i] = input();
  }
  return a[n - 1];
};

fraction compute(fraction a, fraction b)
{
  fraction res;
  if (a.deno == b.deno)
  {
    res.deno = a.deno;
    res.num = a.num + b.num;
  }
  else
  {
    res.deno = a.deno * b.deno;
    res.num = (a.num * b.deno) + (b.num * a.deno);
  }
  return res;
};

fraction compute_n(fraction c, fraction a[], int n)
{
  c.num = 0;
  c.deno = 1;
  fraction temp;
  for (int i = 0; i < n; i++)
  {
    c = compute(c, a[i]);
  }
  temp = c;
  return temp;
};
void output(fraction c, fraction a[])
{
  printf("The final sum is %d/%d which is %.2f %", c.num, c.deno, (c.num / (1.0 * c.deno)) * 100);
};

int main()
{
  int n;
  printf("Enter the number of fractions\n");
  scanf("%d", &n);
  fraction c, a[n];
  a[n] = input_n(a, n);
  c = compute_n(c, a, n);
  output(c, a);
  return 0;
}
