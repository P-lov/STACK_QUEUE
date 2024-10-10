#define _CRT_SECURE_NO_WARNINGS
#include "queue.h"

void QueueInit(Queue* q) {

	assert(q);
	q->head = NULL;
	q->tail = NULL;

}
void QueueDestroy(Queue* q) {

	assert(q);
	QueueNode* cur = q->head;
	while (cur) {

		QueueNode* next = cur->next;
		free(cur);
		cur = next;

	}
	q->head = NULL;
	q->tail = NULL;
}
//Î²²å
void QueuePush(Queue* q, QDataType x) {
	assert(q);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->val = x;
	newnode->next = NULL;
	if (q->head == NULL) {
		q->head = q->tail = newnode;
	}
	else {
		q->tail->next = newnode;
		q->tail = newnode;
	}
}
//Í·É¾
void QueuePop(Queue* q) {
	assert(q);
	assert(!QueueEmpty(q));
	QueueNode* next = q->head->next;
	free(q->head);
	q->head = next;
	if (q->head == NULL)
		q->tail = NULL;	//±ÜÃâÒ°Ö¸Õë
}

QDataType QueueFront(Queue* q) {

	assert(q);
	assert(!QueueEmpty(q));
	return q->head->val;

}

QDataType QueueBack(Queue* q) {

	assert(q);
	assert(!QueueEmpty(q));
	return q->tail->val;
}

int QueueSize(Queue* q) {

	assert(q);
	int count = 0;
	QueueNode* cur = q->head;
	while (cur) {
		count++;
		cur = cur->next;
	}
	return count;
}
	
bool QueueEmpty(Queue* q) {

	assert(q);
	return q->head == NULL;

}

