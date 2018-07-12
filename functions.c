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
  if(((n >= 1)) && ((s >= 1) && (s <= n)))
  {
    s--;
    if(s > 0)
    return (n - s) + suffix_sum(n, s);
    return n;
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
  if(A[0] == 'a' || A[0] == 'e' || A[0] == 'i' || A[0] == 'o' || A[0] == 'u')
  {
    return A[0] < v_sorted(&A[1]);;
    return A[0];
  }
  return v_sorted(&A[1]);
}

int palindrome(const char *S, unsigned int n)
{
  int len;
  for(len = 0; S[len] != '\0'; len++);
  if(n>0)
  {
    return (S[len - n] == S[n-1]) && palindrome(S, --n);
  }
  return 1;
}

int order(const int *A, unsigned int n)
{
  if(n <= 1)
  {
    return 1;
  }

  if(n == 2)
  {
    return (A[n-2] < A[n-1]) ? 1 : ((A[n-2] > A[n-1]) ? -1 : 0);
  }

  if(A[n-2] < A[n-1])
  {
    return (1 == order(A, --n)) ? 1 : 0;
  }
  else if(A[n-2] > A[n-1])
  {
    return (-1 == order(A, --n)) ? -1 : 0;
  }
  else
  {
    return (0 == order(A, --n)) ? 0 : 0;
  }


}

/*int dig;
if(n <= 1)
{
  return 0;
}
if(n > 2)
{
  dig = order(A, --n);
  //printf("a[n-1]: %d, a[n-2]: %d\n", A[n-1], A[n-2]);
  return (dig == ((A[n-1] > A[n-2]) ? 1 : ((A[n-1] < A[n-2]) ? -1 : 0)) ? dig : 0);
}
//printf("a[n-1]: %d, a[n-2]: %d\n", A[n-1], A[n-2]);
return ((A[n-1] > A[n-2]) ? 1 : ((A[n-1] < A[n-2]) ? -1 : 0));*/

void reverse(char *str, unsigned int len)
{

  int fl_len = strlen(str);
  if(len > (fl_len / 2))
  {
    char temp = str[fl_len - len];
    str[fl_len - len] = str[len - 1];
    str[len-1] = temp;
    reverse(str, --len);
  }
  return;
}

void print_reversed_letters(const char *str)
{
  if(str[0] != '\0')
  {
    print_reversed_letters(&str[1]);
    if((str[0] >= 'a') && (str[0] <= 'z'))
    printf("%c", str[0]);
  }
}

int binary_search(const int *A, unsigned int n, int k)
{
  if(n >= 1)
  {
    if(k < A[n/2])
    {
      return binary_search(A, (n/2), k);
    }
    else if (k > A[n/2])
    {
      return binary_search(&A[(n/2)+1], (n/2) + ((n%2==1) ? 1 : 0), k);
    }
    else
    {
      if(k == A[n/2])
      {
        return 1;
      }
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

void removeSpaces(char *str)
{
  int len = strlen(str);
  for(int i = 1; i < len; i++)
  {
    if(str[i] == 32 && str[i-1] == 32)
    {
      str[i] = '\0';
    }
  }
}

void reverse2(char *str, int ind)
{
  int len = ind;
  for(;((str[len] != ' ') && (str[len] != '\0') && (len > 0)); len--);
  if(str[len] == ' ' || str[len] == '\0')
  {
    len++;
  }
  while(len < ind)
  {
    char temp = str[len];
    str[len] = str[ind];
    str[ind] = temp;
    len++;
    ind--;
  }
  return;
}

void purge(char *s)
{
  int len = strlen(s);
  for(int i = 0; i < len-1; i++)
  {
    if(s[i] == ' ' && s[i+1] ==  ' ')
    {
      s[i] = '\0';
    }
  }
}

void reverse3(char *start, char *finish)
{
  char temp;
  while (start < finish)
  {
    temp = *start;
    *start++ = *finish;
    *finish-- = temp;
  }
}

unsigned int reverse_words(char *str, unsigned int idx)
{
 if(str[idx])
 {
   if (str[idx] == '\0')
   {
     reverse3(&str[idx+1], &str[idx-1]);
   }
   else if(str[idx] == ' ')
   {
     reverse3(&str[idx+1], &str[idx-1]);
   }
   return reverse_words(str, idx + 1);
 }


 return idx;
}

/*
int index = 0;
char this_char = str[idx];
if(this_char != '\0')
{
  if((this_char >= 'A') && (this_char <= 'Z'))
  {
    index = reverse_words(str, ++idx);
    str[index] = this_char - 'A' + 'a';
    str[index+1] = '\0';
  }
  else if ((this_char >= '0') && (this_char <= '9'))
  {
    index = reverse_words(str, ++idx);
    str[index] = this_char;
    str[index+1] = '\0';
  }
  else if ((this_char >= 'a') && (this_char <= 'z'))
  {
    index = reverse_words(str, ++idx);
    str[index] = this_char;
    str[index+1] = '\0';

  }
  else if (this_char || str[index+1] == '\0')
  {
      index = reverse_words(str, ++idx);
      if(str[index-1] != 32)
      {
        str[index] = ' ';
        str[index+1] = '\0';
        reverse2(str, index-1);
      }

  }
  else
  {
    //printf("improperly here\n");
  }
  printf("index %d == 55\n", index);
  if(str[index] == '\0')
  {
    reverse2(str, index);
  }
  return index + 1;
}
else
{
  str[idx] = '\0';
  return 0;
}*/

void print_pattern(unsigned int len, unsigned int col)
{
  return;
}
