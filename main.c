#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "BitRuns.h"

int main()
{
  double uniRunner8 = 0;
  double uniRunner12 = 0;
  double uniRunner16 = 0;

  //average runs for 8 bit
  uniRunner8 = BitRunner(8);

  //average runs for 12 bit
  uniRunner12 = BitRunner(12);

  //average runs for 16 bit
  uniRunner16 = BitRunner(16);

  //Result
  printf("The average number of consecutive ones \nin each possible binary number for:\n\n ");

  //printing out 8, 12, and 16 bit values using the BitRun() method.
  printf("8 bit: %f\n", uniRunner8); //Prints out 2
  printf("12 bit: %f\n", uniRunner12); //Prints out 3
  printf("16 bit: %f\n", uniRunner16); //Prints out 4

}
