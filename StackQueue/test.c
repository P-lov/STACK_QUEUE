#define _CRT_SECURE_NO_WARNINGS
//#include "stack.h"
//
//void stacktest() {
//	ST st;
//	StackInit(&st);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	StackPush(&st, 4);
//	//StackData(&st);
//	//StackPop(&st);
//	StackData(&st);
//	//printf("%d", StackTop(&st));
//	StackDestory(&st);
//}
//
//
//int main() {
//
//	stacktest();
//	return 0;
//}

#include "queue.h"

void queuetest() {
	Queue q;	//指向队列头和尾
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	//printf("%d\n", QueueFront(&q));
	//printf("%d\n", QueueBack(&q));
	while (!QueueEmpty(&q)) {
		QDataType data = QueueFront(&q);
		printf("%d ", data);
		QueuePop(&q);
	}
	QueueDestroy(&q);
}
int main() {

	queuetest();
	return 0;
}