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
}
```

## 3-1

탕수육을 서로 번갈아 가면서 말하게 되는 탕수육 게임입니다. 탕수육의 배열을 이용하여 간단히 만들 수 있습니다.
```C
#include <stdio.h>

int main(void){
   int i=0, turn;
   char input, tsy[] = {'t', 's', 'y'};
   
   turn = 1; //선공을 입력받습니다 
   
   //turn = 0; //후공을 입력 받습니다 
   
   while(1){
      if(turn){
         scanf(" %c", &input);
         if(input!=tsy[i%3]){
            printf("YOU LOSE\n");
            break;
         }
         turn = 0;
      } 
      else{
         printf("%c\n", tsy[i%3]);
         turn = 1;
      }
      i++;
   }
   
   return 0;
}
```

## 3-2

30턴이 넘으면 기권을 해야하므로 그 조건을 추가로 달아줍니다.
```C
#include <stdio.h>

int main(void){
   int i=0, turn;
   char input, tsy[] = {'t', 's', 'y'};
   
   turn = 1; //선공을 입력받습니다 
   
   //turn = 0; //후공을 입력 받습니다 
   
   while(1){
      if(i >= 30)
      {
         printf("YOU WIN\n");
	 break;
      }
      if(turn){
         scanf(" %c", &input);
         if(input!=tsy[i%3]){
            printf("YOU LOSE\n");
            break;
         }
         turn = 0;
      } 
      else{
         printf("%c\n", tsy[i%3]);
         turn = 1;
      }
      i++;
   }
   
   return 0;
}
```

## 4-1

이런 유형의 문제는 과일의 인덱스를 식별번호로 하고, 그에 대한 정보를 인덱스에 맞추어서 해결하는 것이 좋습니다.

모든 경우에 대하여 두 과일을 서로 비교하고 크기가 큰 과일이 순서에서 한 단계 커지는 (순서가 미루어지는) 모습을 그려내면 됩니다.
그리고 출력할 때에는 과일 순서에 대한 정보를 이용하여 올바르게 출력해냅니다.

```C
#include <stdio.h>

int main(void)
{
	int len_fruit = 0;
	int fruit[100] = { 0, };
	int fruit_order[100] = { 0, };
	
	scanf("%d", &len_fruit);
	
	int i = 0, j = 0;
	for (i = 0; i < len_fruit; i++)
	{
		scanf("%d", &fruit[i]);
	}
	
	for (i = 0; i < len_fruit; i++)
	{
		for (j = i+1; j < len_fruit; j++)
		{
			if (fruit[i] < fruit[j])
			{
				fruit_order[j]++;
			}
			else
			{
				fruit_order[i]++;
			}
		}
	}
	
	for (i = 0; i < len_fruit; i++)
	{
		printf("%d번째 귤을 %d번째로 먹습니다.\n", i+1, fruit_order[i]+1);
	}
	
	return 0;
}		 	 
```

## 4-2

```C
#include <stdio.h>

int main(void)
{
	int eat_fruit = 0;
	int len_fruit = 0;
	int fruit[100] = { 0, };
	int fruit_order[100] = { 0, };
	
	scanf("%d %d", &eat_fruit, &len_fruit);
	
	int i = 0, j = 0;
	for (i = 0; i < len_fruit; i++)
	{
		scanf("%d", &fruit[i]);
	}
	
	for (i = 0; i < len_fruit; i++)
	{
		for (j = i+1; j < len_fruit; j++)
		{
			if (fruit[i] < fruit[j])
			{
				fruit_order[j]++;
			}
			else
			{
				fruit_order[i]++;
			}
		}
	}
	
	for (i = 0; i < len_fruit; i++)
	{
		if (fruit_order[i] >= len_fruit - eat_fruit)
		printf("%d번째 귤을 %d번째로 먹습니다.\n", i+1, fruit_order[i]+eat_fruit-len_fruit+1);
	}
	
	return 0;
}		 
```

## 5-1

문자형과 정수형을 적절히 사용하여 작성합니다.

```C
#include <stdio.h>

char one_encryption(char i)
{
	if (i%2 == 1) i++;
	else i--;
	
	return i;
}

int main(void)
{
	char i = 0;
	
	scanf("%c", &i);
	
	i = one_encryption(i);
	
	printf("%c", i);
	
	return 0;
}
```
