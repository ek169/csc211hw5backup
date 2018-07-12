#include <stdio.h>
#include "functions.h"

int main(void)
{

/*
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
*/
/*
  printf("~~~~~~ v Sorted Test ~~~~~~\n");
  char s3[] = "aeiou";
  char s4[] = "oea";
  char s5[] = "bbbbbbb";


  printf("s3: %d\n", v_sorted(s3));
  printf("s4: %d\n", v_sorted(s4));
  printf("s5: %d\n", v_sorted(s5));

  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
*/


/*
  printf("~~~~~~ order Test ~~~~~~\n");
  int xyz[2] = {1, 1};
  int xyz1[6] = {-4, -2, 0, 1, 19, 200};
  int xyz2[6] = {5, 4, 0, -100, -200, -300};
  int xyz3[6] = {0, 0, 0, 0, 0, 0};
  int xyz5[7] = {-1, -1, -1, 0, 0, 0, 0};
  int xyz6[2] = {-1000000, 500};
  int xyz7[8] = {9, 8, 7, 6, 5, 4, 3, 2};
  int xyz8[4] = {-99999, -88888, -77777, -5555};




  printf("0 == %d\n", order(xyz, 2));
  printf("1 == %d\n", order(xyz1, 6));
  printf("-1 == %d\n", order(xyz2, 6));
  printf("0 == %d\n", order(xyz3, 6));
  printf("0 == %d\n", order(xyz5, 7));
  printf("1 == %d\n", order(xyz6, 2));
  printf("-1 == %d\n", order(xyz7, 8));
  printf("1 == %d\n", order(xyz8, 4));
*/





  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");


  printf("~~~~~~ Reverse Words ~~~~~~\n");
  char wrds1[] = "racecar yes";
  char wrds2[] = "I think therefore I am";
  char wrds3[] = "Programmers are tools for converting caffeine into code";
  char wrds4[] = "No   matter  where   you go,there you    are.";
  //printf("string: %s\n", wrds1);
  //printf("length: %d\n", reverse_words(wrds1, 0));
  //printf("length: %d\n", reverse_words(wrds2, 0));
  printf("length: %d\n", reverse_words(wrds3, 0));
  //printf("length:%d\n", reverse_words(wrds4, 0));

  //printf("string: %s\n", wrds1);
  //printf("string: %s\n", wrds2);
  printf("string: %s\n", wrds3);
  //printf("string:%s\n", wrds4);

  printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");



}
