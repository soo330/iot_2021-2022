// 2021-08-10 변수선언과 사용
#include <stdio.h>;

//// 증감연산자 2
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

//증감연산자
//int main(void)
//{
//	int val;
//
//	val = 1;
//	printf(" 전위형 증가: %d\n", ++val); //2가 된 후 출력
//	printf(" 후위형 증가: %d\n", val++); // 출력 후 2가 됨
//
//	val = 1;
//	printf(" 전위형 감소: %d\n", --val); // 0이 된 후 출력
//	printf(" 후위형 감소: %d\n", val--); // 출력 후 0이 됨
//
//	return 0;
//
//}


//부호연산자
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

////산술연산자 3
//int main(void)
//{
//	double c = 3, d = 2;
//	double result = 0; // double 실수(소숫점 이하까지 나오게)
//
//	result = c / d;
//	printf(" result = %lf\n", result);
//
//	return 0;
//
//}

//산술연산자 2
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


////산술 연산자
//int main(void)
//{
//	int val1 = 5, val2 = 2;
//
//	printf("5 + 2 = %d\n", val1 + val2);  // 덧셈
//	printf("5 - 2 = %d\n", val1 - val2);  // 뺄셈
//	printf("5 * 2 = %d\n", val1 * val2);  // 곱셉
//	printf("5 / 2 = %d\n", val1 / val2);  // 나눗셈
//	printf("5 %% 2 = %d\n", val1 % val2); // 나머지
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


////p.51 기호출력
//int main(void)
//{
//	int transport = 50000;
//	int ect = 2000;
//
//	printf("\"너 자신을 알라\"라고 소크라테스는 말했다.(사실 그런 적 없다)\n");
//	printf("일이 70%% 진행되었다.\n");
//	printf("c:\\temp 폴더에 복사한다. \n");
//	printf("\n");
//	printf("교통비\t: %5d\t \\ \n", transport);
//	printf("잡비\t: %5d\t \\", ect);
//
//	return 0;
//
//}

////p.50 자릿수 설정
//int main(void)
//{
//	int radius = 10;
//	double pi = 3.141592; // int 정수 double 실수
//	printf("radius = %05d\n", radius); // 반지름을 정수앞에 0을 붙여 5자리로 맞추어라
//	printf("PI = %0.2f\n", pi);
//
//	return 0;
//
//}

//printf와 10진 정수 / 실수
//int main(void)
//{
//	int radius = 10;
//	double pi = 3.141592;
//	printf("radius = %d, PI = %f\n", radius, pi);
//	//printf에서 f는 포멧(formatted)을 의미함 - d나 f의 포멧을 사용하라
//	// 서식문자에서 %d 부호있는 10진 정수 / %f부호있는 10진 실수
//	return 0;
//}





////변수선언
//int main(void)
//{
//	//int a, b, c;
//	//int a = 10, b = 20, c;  //변수선언
//	int a = 10, b = 20;
//	double ab = 10;
//	char c = 'A';
//
//
//	a = 10;					//변수사용b = 20;c = a + b;return 0;
//
//}