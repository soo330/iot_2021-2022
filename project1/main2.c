// 2021-08-10 ��������� ���
#include <stdio.h>;

//// ���������� 2
//int main(void)
//{
//	int val1 = 0, result1;
//	int val2 = 0, result2;
//
//	result1 = val1++ + val1++ + val1++;
//	result2 = ++val2 + ++val2 + ++val2;
//
//	printf("val1 = %d, result1 = %d\n", val1, result1);
//	printf("val1 = %d, result2 = %d\n", val2, result2);
//
//	return 0;
//
//}

//����������
//int main(void)
//{
//	int val;
//
//	val = 1;
//	printf(" ������ ����: %d\n", ++val); //2�� �� �� ���
//	printf(" ������ ����: %d\n", val++); // ��� �� 2�� ��
//
//	val = 1;
//	printf(" ������ ����: %d\n", --val); // 0�� �� �� ���
//	printf(" ������ ����: %d\n", val--); // ��� �� 0�� ��
//
//	return 0;
//
//}


//��ȣ������
//int main(void)
//{
//	int a = 1, b = 2, c = 3, d = 4;
//	int result;
//	int val1 = 5;
//	int val2 = -val1;
//
//	printf("%d\n", val2 -= val1);
//
//	/*result = b + c;
//	result *= c;
//	result /= d;
//	result += a;*/
//
//	/*result = b + c;
//	result = result * c;
//	result = result / d;
//	result = result + a;*/
//
//	/*printf(" %d \n", result);*/
//
//	return 0;
//
//}

////��������� 3
//int main(void)
//{
//	double c = 3, d = 2;
//	double result = 0; // double �Ǽ�(�Ҽ��� ���ϱ��� ������)
//
//	result = c / d;
//	printf(" result = %lf\n", result);
//
//	return 0;
//
//}

//��������� 2
//int main(void)
//{
//	int a = 1, b = 5, c = 5, d = 2;
//	double result = 0;
//
//	result = a + (b + c) * c / d;
//
//	printf(" result = %d\n", result);
//	printf(" result = %d\n", (b + c) * c / d);
//
//	return 0;
//
//}


////��� ������
//int main(void)
//{
//	int val1 = 5, val2 = 2;
//
//	printf("5 + 2 = %d\n", val1 + val2);  // ����
//	printf("5 - 2 = %d\n", val1 - val2);  // ����
//	printf("5 * 2 = %d\n", val1 * val2);  // ����
//	printf("5 / 2 = %d\n", val1 / val2);  // ������
//	printf("5 %% 2 = %d\n", val1 % val2); // ������
//
//	return 0;
//
//}


//int main(void)
//{
//	int radius;
//	float pi;
//	scanf_s("%d %lf", &radius, &pi);
//
//	//printf("-----------------------------\n");
//
//	return 0;
//
//}


////p.51 ��ȣ���
//int main(void)
//{
//	int transport = 50000;
//	int ect = 2000;
//
//	printf("\"�� �ڽ��� �˶�\"��� ��ũ���׽��� ���ߴ�.(��� �׷� �� ����)\n");
//	printf("���� 70%% ����Ǿ���.\n");
//	printf("c:\\temp ������ �����Ѵ�. \n");
//	printf("\n");
//	printf("�����\t: %5d\t \\ \n", transport);
//	printf("���\t: %5d\t \\", ect);
//
//	return 0;
//
//}

////p.50 �ڸ��� ����
//int main(void)
//{
//	int radius = 10;
//	double pi = 3.141592; // int ���� double �Ǽ�
//	printf("radius = %05d\n", radius); // �������� �����տ� 0�� �ٿ� 5�ڸ��� ���߾��
//	printf("PI = %0.2f\n", pi);
//
//	return 0;
//
//}

//printf�� 10�� ���� / �Ǽ�
//int main(void)
//{
//	int radius = 10;
//	double pi = 3.141592;
//	printf("radius = %d, PI = %f\n", radius, pi);
//	//printf���� f�� ����(formatted)�� �ǹ��� - d�� f�� ������ ����϶�
//	// ���Ĺ��ڿ��� %d ��ȣ�ִ� 10�� ���� / %f��ȣ�ִ� 10�� �Ǽ�
//	return 0;
//}





////��������
//int main(void)
//{
//	//int a, b, c;
//	//int a = 10, b = 20, c;  //��������
//	int a = 10, b = 20;
//	double ab = 10;
//	char c = 'A';
//
//
//	a = 10;					//�������b = 20;c = a + b;return 0;
//
//}