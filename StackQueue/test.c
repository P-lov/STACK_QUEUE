#define _CRT_SECURE_NO_WARNINGS
#include "stack.h"
void stacktest() {
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	//StackData(&st);
	//StackPop(&st);
	//StackData(&st);
	//printf("%d", StackTop(&st));
	StackDestory(&st);
}
int main() {

	stacktest();
	return 0;
}