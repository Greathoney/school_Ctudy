#include <stdio.h>
#include <stdbool.h>

void now_progress(bool is_y_crossed, bool is_h_crossed, bool is_k_crossed, bool is_b_crossed)
{
	printf("\n다리를 건너지 않은 사람");
	if (is_y_crossed == false)      printf(" y");
	if (is_h_crossed == false)      printf(" h");
	if (is_k_crossed == false)      printf(" k");
	if (is_b_crossed == false)      printf(" b");

	printf("\n다리를 건넌 사람");
	if (is_y_crossed == true)       printf(" y");
	if (is_h_crossed == true)       printf(" h");
	if (is_k_crossed == true)       printf(" k");
	if (is_b_crossed == true)       printf(" b");

	printf("\n");
}

int main(void)
{

	float y_time, h_time, k_time, b_time, result = 0;
	bool is_y_crossed = false, is_h_crossed = false, is_k_crossed = false, is_b_crossed = false;

	printf("y, h, k, b의 속력을 입력하세요. ");
	scanf("%f %f %f %f", &y_time, &h_time, &k_time, &b_time);

	y_time = 2.737 / y_time;
	h_time = 2.737 / h_time;
	k_time = 2.737 / k_time;
	b_time = 2.737 / b_time;

	int i;
	char person1, person2;
	float person1_time = 0, person2_time = 0;
	for (i = 0; i < 3; i++)
	{
		person1_time = 0;
		person2_time = 0;
		now_progress(is_y_crossed, is_h_crossed, is_k_crossed, is_b_crossed);
		printf("다리를 건널 사람 2명을 고르세요. ");
		scanf(" %c %c", &person1, &person2);
		printf("%c %c", person1, person2);
		if (person1 == 'y' || person2 == 'y')
		{
			is_y_crossed = true;
			person1_time = y_time;
		}
		if (person1 == 'h' || person2 == 'h')
		{
			is_h_crossed = true;
			if (person1_time == 0)
				person1_time = h_time;
			else
				person2_time = h_time;
		}
		if (person1 == 'k' || person2 == 'k')
		{
			is_k_crossed = true;
			if (person1_time == 0)
				person1_time = k_time;
			else
				person2_time = k_time;
		}
		if (person1 == 'b' || person2 == 'b')
		{
			is_b_crossed = true;
			person2_time = b_time;
		}

		if (person1_time > person2_time) result += person1_time;
		else result += person2_time;

		now_progress(is_y_crossed, is_h_crossed, is_k_crossed, is_b_crossed);

		if (i == 2)    break;

		printf("양산을 가져올 사람 1명을 고르세요. ");
		scanf(" %c", &person1);
		if (person1 == 'y')
		{
			is_y_crossed = false;
			result += y_time;
		}
		if (person1 == 'h')
		{
			is_h_crossed = false;
			result += h_time;
		}
		if (person1 == 'k')
		{
			is_k_crossed = false;
			result += k_time;
		}
		if (person1 == 'b')
		{
			is_b_crossed = false;
			result += b_time;
		}
	}

	printf("\n다리를 모두 건넜습니다. 다리를 건너는데 %.2f시간 걸렸습니다.\n", result);

	return 0;
}

