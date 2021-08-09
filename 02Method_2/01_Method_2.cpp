#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void add(double a, double b) {
	printf("%lf + %lf = %lf\n", a, b, a + b);
}

void subtract(double a, double b) {
	printf("%lf - %lf = %lf\n", a, b, a - b);
}

void multiply(double a, double b) {
	printf("%lf x %lf = %lf\n", a, b, a * b);
}

void divide(double a, double b) {
	printf("%lf ÷ %lf = %lf\n", a, b, a / b);
}

int main() {
	double a, b;
	printf("Enter first number : ");
	scanf("%lf", &a);
	printf("Enter second number : ");
	scanf("%lf", &b);
	add(a, b);
	subtract(a, b);
	multiply(a, b);
	divide(a, b);
	return 0;
}