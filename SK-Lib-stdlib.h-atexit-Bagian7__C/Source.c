#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*
	Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
	Modified For Learn by RK
	I.D.E : VS2022
*/

void fn1(void), fn2(void), fn3(void), fn4(void);

int main() {
	atexit(fn1);
	atexit(fn2);
	atexit(fn3);
	atexit(fn4);
	printf("This is executed first.\n");

	_getch();
	return 0;
}

void fn1() {
	printf("next.\n");
}

void fn2() {
	printf("executed ");
}

void fn3() {
	printf("is ");
}

void fn4() {
	printf("This ");
}