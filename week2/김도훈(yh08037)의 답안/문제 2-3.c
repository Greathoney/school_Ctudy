#include <stdio.h>

void LED_Printer(int time)
{
    char phrases[] = "happy birthday KDH_______________happy birthday KDH";

    int end_time;
    end_time = time + 18;
    for (time; time<end_time; time++)
    {
        printf("%c", phrases[time]);
    }
    printf("\n");

}


int main(void)
{
    int time;

    printf("시간을 입력하세요. ");
    scanf("%d", &time);
    time %= 34;

    LED_Printer(time);
    return 0;
}


