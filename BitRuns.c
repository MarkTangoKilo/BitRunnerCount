#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "BitRuns.h"

//Taking the bitsize of the number, the function then
//calculates the number of times consecutive ones
//appear in a row
double BitRunner(double dNum)
{
  int uniRunOrNot = 0;
  int uniRunCount = 0;
  double dRunTotal = 0;
  double dMax = pow(2, dNum);//Retruns the maximum amount of numbers to be processed

  for (int x = 0; x <= dMax; x++)
  {
    for (int uniMask = 1; uniMask <= dMax; uniMask <<= 1)
    {
      if((x & uniMask) != 0)
      {
        if (uniRunOrNot == 0)
        {
          //Total count of the runs
          uniRunCount++;
        }
        // Making it so that if two consective ones are in a row,
        //It doesn't int up the Run Count.
        uniRunOrNot++;
      }
      else
      {
        //updating everything once the run of ones has ended
        dRunTotal += uniRunCount;
        uniRunOrNot = uniRunCount = 0;
      }
    }
  }
  //dividing the total by the total amount of possible numbers (the max)
  dRunTotal /= dMax;
  return dRunTotal;
}
