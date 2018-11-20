## 1-1
졸업학점을 최대학점으로 나누면 최소 몇 학기 뒤에 졸업할 수 있는지 알 수 있죠.

그런데 딱 나누어 떨어지지 않은 경우에는 한 학기 더 수강을 할 필요가 있어요.

그래서 졸업학점을 최대학점으로 나누고 그 수를 올림해 줍시다.

```C
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
```
## 1-2
현재의 기준으로 작용하였으니, 졸업학점 - 현재학점을 하고 그대로 계산해줍니다.
```C
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
```

## 2-1
하루마다 이자가 일정 비율 쌓이므로 돈을 빌려간 일수 만큼 반복해주고, 돈을 늘려가는 방향으로 코드를 작성해야 합니다.
```C
#include <stdio.h>

int main(void)
{
	float lent_money = 0;
	float money_rate = 0;
	int period = 0;
	
	scanf("%f %f %d", &lent_money, &money_rate, &period);
	
	int i = 0;
	for (i = 0; i<period; i++)
	{
		lent_money += lent_money * money_rate;
	}
	
	printf("준형이가 갚아야 할 돈은 %.1f원 입니다.", lent_money);
	
	return 0;
}
```
## 2-2
계속 이자를 붙여나가는데 1원 미만이 될 때 까지 붙여나가면 된다. 그 사이에 기간을 1씩 증가시키면 문제를 쉽게 해결할 수 있다.
```C
#include <stdio.h>

int main(void)
{
	float lent_money = 0;
	float money_rate = 0;
	int period = 0;
	
	scanf("%f %f", &lent_money, &money_rate);
	
	while (lent_money >= 1)
	{
		lent_money += lent_money * money_rate;
		period++;
	}
	
	printf("%d", period);
	
	return 0;
}```
## 3-1
ㅇㄹ 
## 3-2
ㅇㄹ 
## 4-1
ㅇㄹ 
## 4-2
ㅇㄹ 
## 5-1
ㅇㄹ 
## 5-2
