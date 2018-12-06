#include <stdio.h>
#include <math.h>

struct country_data{
	double area;
	int count_point;
	int point_X[10], point_Y[10];
};


int main(void)
{
	struct country_data country[2]; //country[0]은 A, country[1]은 B

	for (int c = 0; c < 2; c++)
	{
		country[c].area = 0;

		printf("%c의 꼭짓점의 개수 : ", 97 + c);
		scanf_s("%d", &country[c].count_point);
		for (int i = 0; i < country[c].count_point; i++)
		{
			printf("%d번째 점 : ", i + 1);
			scanf_s("%d%d", country[c].point_X + i, country[c].point_Y + i);
		}
		country[c].point_X[country[c].count_point] = country[c].point_X[0];
		country[c].point_Y[country[c].count_point] = country[c].point_Y[0];


		for (int i = 0; i < country[c].count_point; i++) {
			country[c].area += country[c].point_X[i] * country[c].point_Y[i + 1] - country[c].point_X[i + 1] * country[c].point_Y[i];
		}
		printf("%c의 면적 : %.2lf\n\n", 97 + c, fabs(country[c].area) / 2);
	}

	if (fabs(country[0].area) == fabs(country[1].area))		printf("넓이가 같습니다.\n");
	else if (fabs(country[0].area) > fabs(country[1].area))		printf("a국이 더 넓습니다.\n");
	else printf("b국이 더 넓습니다.");

	return 0;

}

