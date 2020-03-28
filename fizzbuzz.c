/*  Program 1, Created by Tyler Higgins, CS 261, tyler.higgins@wsu.edu
 *  This is the only file in the Project.  main() is in this file.
 *  How to compile: compile this file with main().
 */
#include <stdio.h>

/* function prototype(s) */
void evalAndPrint(int lo, int hi, int fi, int bu);

/* main function of the program: takes user input then
 * calls evalAndPrint.  returns 0 when user terminates,
 * returns 1 if an error occurs.  Do-while loops ensure valid
 * input.
 */
int main()
{
  int low = 0, high = 0, fizz = 0, buzz = 0;
  do
  {
    do
    {
      do
      {
        printf("Enter start of range: ");
        scanf("%d", &low);
      } while(low < 0);

      if(low == 0)
      {
        return 0;
      }

      do
      {
        printf("Enter end of range: ");
        scanf("%d", &high);
      } while(high < 1);

    } while(low >= high);

    do
    {
      printf("Enter \'Fizz\' value: ");
      scanf("%d", &fizz);
    } while(fizz < 1);

    do
    {
      printf("Enter \'Buzz\' value: ");
      scanf("%d", &buzz);
    } while(buzz < 1);

  evalAndPrint(low,high,fizz,buzz);
  } while(low != 0);

  return 1;
}
/* this function compares each number with the fizz and buzz
 * numbers, prints "Fizz" if multiple of fizz number, or
 * "Buzz" if multiple of Buzz number.
 */
 void evalAndPrint(int lo, int hi, int fi, int bu)
 {
   for(int i = lo; i <= hi; i++)
   {
     if ((i % fi) == 0 || (i % bu) == 0)
     {
       if((i % fi) == 0)
       {
         printf("Fizz");
       }
       if((i % bu) == 0)
       {
         printf("Buzz");
       }
     }
     else
     {
       printf("%d", i);
     }
     printf("\n");
   }
   printf("\n");
 }
