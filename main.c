#include <stdio.h>
#include "functions.h"

int main(void)
{

  printf("~~~~~~ Power Test ~~~~~~\n");
  printf("125 == %lu\n", power(5, 3));
  printf("81 == %lu\n", power(3, 4));
  printf("10000 == %lu\n", power(10, 4));
  printf("144 == %lu\n", power(12, 2));
  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");


  printf("125 == %lu\n", power(5, 3));
  printf("81 == %lu\n", power(3, 4));
  printf("10000 == %lu\n", power(10, 4));
  printf("144 == %lu\n", power(12, 2));
  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");


  printf("~~~~~~ Prefix Sum Test ~~~~~~\n");
  printf("15 == %lu\n", prefix_sum(5));
  printf("55 == %lu\n", prefix_sum(10));
  printf("28 == %lu\n", prefix_sum(7));
  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");

  printf("~~~~~~ Suffix Sum Test ~~~~~~\n");
  printf("9 == %lu\n", suffix_sum(5, 2));
  printf("105 == %lu\n", suffix_sum(23, 5));
  printf("35 == %lu\n", suffix_sum(35, 1));
  printf("0 == %lu\n", suffix_sum(19, 0));
  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");

  printf("~~~~~~ Sum Digits Test ~~~~~~\n");
  printf("6 == %u\n", sum_digits(524));
  printf("2 == %u\n", sum_digits(12));
  printf("22 == %u\n", sum_digits(93848552));
  printf("12 == %u\n", sum_digits(1203456));
  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");

  printf("~~~~~~ Find Min Test ~~~~~~\n");
  int narr1[5] = {7, 4, 6, 3, 9};
  int narr2[12] = {7, 4, 6, 3, 9, -6, 2, 33, 44, 55, 29, 43};
  printf("3 == %d\n", find_min(&narr1[0], 5));
  printf("-6 == %d\n", find_min(&narr2[0], 12));
  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");

  printf("~~~~~~ Len Test ~~~~~~\n");
  char s1[] = "hello there";
  char s2[] = "df ertt ggg";
  printf("11 == %d\n", len(s1));
  printf("11 == %d\n", len(s2));
  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");

  printf("~~~~~~ v Sorted Test ~~~~~~\n");
  char s3[] = "abcdef";
  char s4[] = "oea";
  char s5[] = "bbbbbbb";


  printf("s3: %d\n", v_sorted(s3));
  printf("s4: %d\n", v_sorted(s4));
  printf("s5: %d\n", v_sorted(s5));

  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");


}
