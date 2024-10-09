#define _CRT_SECURE_NO_WARNINGS

#include "stack.h"


void StackInit(ST* ps) {
	assert(ps);
	ps->a = NULL;
	ps->top = 0;//top 0 指向栈顶数据的下一个；top -1 指向栈顶数据
	ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x) {
	assert(ps);
	if (ps->capacity == ps->top) {
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* new = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);//注意区别
		if (new == NULL)
			exit(-1);
		ps->a = new;
		ps->capacity = newcapacity;
	}
	ps->a[ps->top] = x;
	ps->top++; 
}

void StackPop(ST* ps) {

	assert(ps);
	assert( !StackEmpty(ps) );
	ps->top--;
}

STDataType StackTop(ST* ps) {

	assert(ps);
	assert( !StackEmpty(ps) );
	return ps->a[ps->top - 1];
}

int StackSize(ST* ps) {

	assert(ps);
	return ps->top;
}

void StackData(ST* ps) {

	assert(ps);
	while ( !StackEmpty(ps) ) {
		printf("%d ", StackTop(ps));
		StackPop(ps);
	}
	printf("\n");
}

bool StackEmpty(ST* ps) {

	assert(ps);
	return ps->top == 0;

}

void StackDestory(ST* ps) {

	assert(ps);
	free(ps->a);
	ps->a == NULL;
	ps->capacity = ps->top = 0;

}