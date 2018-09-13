#include <stdio.h>
int main()
{
  int ctr;
  int lcm = 2520;
  for (ctr = 11; ctr <= 20; ctr++)
    {
      if (lcm % ctr != 0){
	int m;
	for (m = 2; m <= ctr; m++)
	  if (lcm * m % ctr == 0){
	    lcm *= m;
	    break;
	  }
      }
    }
  printf("%d\n", lcm);
  return 0;
}
