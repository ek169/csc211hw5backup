#include <stdio.h>
#include <string.h>

long int power(int b, int e)
{
  if(e > 0)
  {
    return b * power(b, e-1);
  }
  else
  {
    return 1;
  }
}

unsigned long int prefix_sum(unsigned int n)
{
  if(n > 0)
  {
    return n + prefix_sum(n-1);
  }
  return 0;
}

unsigned long int suffix_sum(unsigned int n, unsigned int s)
{
  if(((n >= 1)&& (n <= 10000)) && ((s >= 1) && (s <= n)))
  {
    s--;
    if(s > 0)
    {
      return n + suffix_sum(n - 1, s);
    }
    else
    {
      return n;
    }
  }
  return 0;
}

unsigned int sum_digits(unsigned int num)
{
  int sum = 0;
  if(num <= 0)
  {
    return sum;
  }

  if((num % 10) % 2 == 0)
  {
    sum = (num%10);
  }

  return sum + sum_digits(num / 10);
}


int find_min(int* arr, int n)
{
  int dig;
  if(n > 1)
  {
    dig = find_min(arr, n - 1);
  }
  else
  {
    return arr[n-1];
  }
  return (arr[n-1] < dig) ? arr[n-1] : dig;
}

int len(char* S)
  {
  if(S[0] != '\0')
  {
    S++;
    return 1 + len(S);
  }
  return 0;
}

int v_sorted(const char *A)
{
  if(A[0] == '\0')
  {
    return 1;
  }
  if((A[0] == 'a') || (A[0] == 'e') || (A[0] == 'i') || (A[0] == 'o')
  || (A[0] == 'u'))
  {

    int v = v_sorted(&A[1]);
    if(v == 1)
    {
      printf("v is a consanent, vow is: %c\n", A[0]);
      return A[0];
    }
    printf("vow is: %c\n", A[0]);
    return A[0] < v_sorted(&A[1]);
  }
  return v_sorted(&A[1]);
}

int palindrome(const char *S, unsigned int n)
{
  if(n>0)
  {
    return (S[strlen(S) - n] == S[n-1]) && palindrome(S, --n);
  }
  return 1;
}

int order(const int *A, unsigned int n)
{
  int dig;
  if(n > 2)
  {
    dig = order(A, --n);
    return (dig ==((A[n-1] > A[n-2]) ? 1 : ((A[n-1] < A[n-2]) ? -1 : 0)) ? dig : 0);
  }
  return ((A[n] > A[n-1]) ? 1 : ((A[n] < A[n-1]) ? -1 : 0));
}

void reverse(char *str, unsigned int len)
{
  int fl_len = strlen(str);
  if(len > (fl_len /2))
  {
    char temp = str[fl_len - len];
    str[fl_len - len] = str[len - 1];
    str[len-1] = temp;
    reverse(str, --len);
  }
}

void print_reversed_letters(const char *str)
{
  int len = strlen(str);
  if((str[len-1] >= 'A') && (str[len-1] <= 'Z'))
  {
    printf("%c", 'a' + str[len-1] - 'A');
  }
  if((str[len-1] >= 'a') && (str[len-1] <= 'z'))
  {
    printf("%c", str[len-1]);
  }
  if(len > 0)
  {
    char new_str[len];
    strcpy(new_str, str);
    new_str[len-1] = '\0';
    print_reversed_letters(new_str);
  }
}

int binary_search(const int *A, unsigned int n, int k)
  {
  if(n < 1)
  {
  return 0;
  }
  if(k < A[n/2])
  {
    binary_search(&A[n/2], (n/2)-1, k);
  }
  else if (k > A[n/2])
  {
    binary_search(&A[n/2], (n/2)+1, k);
  }
  else
  {
    if(k==A[n/2])
    {
      return 1;
    }
  }
  return 0;
}

void draw_triangle(unsigned int a, unsigned int b, unsigned int c)
{
  int i;
  if(a <= b)
  {
    for(i = 0; i < a; i++)
    {
      printf("+");
    }
    printf("\n");

    draw_triangle(a+c, b, c);

    for(i = 0; i < a; i++)
    {
      printf("+");
    }
    printf("\n");
  }
  else
  {
    return;
  }
}

unsigned int reverse_words(char *str, unsigned int idx)
{

}
