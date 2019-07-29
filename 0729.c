#include <stdio.h>
#include <stdlib.h>

#define N 3
#define Y(n) ((N+1)*n)//这种定义是严格禁止的

void Judge(int n,int k)
{
	int i;
	int a = 1;
	for (i = 0; i < k; i++)
	{
		a *= 2;
	}
	if (n == a)
		printf("n是2的k次方！\n");
	else
		printf("n不是2的k次方！\n");
}

int main()
{
	//int z = 2 * (N + Y(5 + 1));
	//printf("%d\n", z);//48

	/*int i = 6;
	if (i <= 6)
	{
		printf("hello\n");
	}
	else
		printf("bye-bye\n");*/

	//char ch = -1;
	//printf("%d\n", ch);//-1

	//int z = (10 / 4 * 4);
	//(double)z;
	//printf("%f\n", z);//0

	//int a = 2, b = 5;
	//a++;
	//b++;
	//int c = a + b;
	//printf("%d\n", c);//9

	//int i, x, y;
	//i = x = y = 0;
	//do{
	//	++i;//1 4
	//	if (i % 2)
	//		x += i, i++;//1  
	//	y += i++;//2 6 12 20
	//} while (i <= 7);
	//printf("%d %d %d", i, x, y);//9 1 20

	Judge(8, 3);


	system("pause");
	return 0;
}