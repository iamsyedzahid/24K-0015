//Answer) The code written is using int which can store upto (2^32)/2 value, which is 2147483648. So we need to use long long int intead of int and replace %d with %lld.

#include <stdio.h>

int main()
{
  long long int testInteger = 30000000000000;
  printf("Number is %lld", testInteger);
return 0;
}
