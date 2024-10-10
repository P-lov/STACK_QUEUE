#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;

//头删尾插实现队列                
typedef struct QueueNode {

	struct QueueNode* next;
	QDataType val;

}QueueNode;


typedef struct Queue {

	QueueNode* head;	//指向队列的头
	QueueNode* tail;	//指向队列的尾

}Queue;

void QueueInit(Queue* q);
void QueueDestroy(Queue* q);
void QueuePush(Queue* q, QDataType x);
void QueuePop(Queue* q);
QDataType QueueFront(Queue* q);
QDataType QueueBack(Queue* q);
int QueueSize(Queue* q);
bool QueueEmpty(Queue* q);


//头插尾删实现队列？