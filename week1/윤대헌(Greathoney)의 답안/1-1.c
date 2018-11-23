#include <stdio.h>
#include <math.h>

int main(void)
{
  float max_score = 0;
  float graduate_score = 0;
  int answer = 0;
  scanf("%d %d", &max_score, &graduate_score);
  
  answer = ceilf(graduate_score / max_score);
  printf("%d학기 뒤에 졸업할 수 있습니다.", answer);
  
  return 0;
}
