#include <stdio.h>
#include <math.h>

int main(void)
{
  float max_score = 0;
  float graduate_score = 0;
  float current_score = 0;
  int answer = 0;
  scanf("%f %f %f", &current_score, &max_score, &graduate_score);
  
  answer = ceilf((graduate_score - current_score) / max_score);
  printf("%d학기 뒤에 졸업할 수 있습니다.", answer);
  
  return 0;
}
