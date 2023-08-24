#pragma once
#include <iostream>

struct stack {
	int info;
	stack* next;
};

stack* createStack() {
	return nullptr;
}

void push(stack*& top, int a) {
	stack* t = new stack{ a, top };
	top = t;
}

int pop(stack*& top) {
	stack* q = top;
	top = top->next;
	int info = q->info;
	delete q;
	return info;
}

int peek(stack* top) {
	if (top) {
		return top->info;
	}
	else {
		std::cout << "stack is empty";
		return 0;
	}
}

bool isEmpty(stack* top) { return !top; }