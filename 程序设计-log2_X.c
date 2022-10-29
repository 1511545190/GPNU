#include <stdio.h>
int main()
{
  //log2_x =?
  int ret = -1;
  int x = 128;
  while(x>0)//底数大于0时
  {
    x/=2;
    ret++;
  }
  printf("%d",ret);
return 0;
}
  
