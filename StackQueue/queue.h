#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;

//ͷɾβ��ʵ�ֶ���                
typedef struct QueueNode {

	struct QueueNode* next;
	QDataType val;

}QueueNode;


typedef struct Queue {

	QueueNode* head;	//ָ����е�ͷ
	QueueNode* tail;	//ָ����е�β

}Queue;

void QueueInit(Queue* q);
void QueueDestroy(Queue* q);
void QueuePush(Queue* q, QDataType x);
void QueuePop(Queue* q);
QDataType QueueFront(Queue* q);
QDataType QueueBack(Queue* q);
int QueueSize(Queue* q);
bool QueueEmpty(Queue* q);


//ͷ��βɾʵ�ֶ��У�