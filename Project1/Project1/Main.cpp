#include "Main.h"

#define SIZE 10
int array[SIZE] = { 0 };
int front, rear;

void main()
{
	addQueue(4);
	addQueue(14);
	addQueue(5);
	addQueue(9);
	addQueue(90);
	addQueue(4);
	/*addQueue(44);
	addQueue(4);
	addQueue(54);
	addQueue(4);
	addQueue(64);*/


	for (int i = front; i < rear; i++) {
		printf("delete=%d\n", deleteQueue() );
	} 
	printf("----��----\n");
	fgetc(stdin);
}

void addQueue(int k) {
	if (rear == SIZE) {
		printf("������ Ǯ\n");
		return;
	}
	array[rear] = k;
	rear++;
}

int deleteQueue() {
	if (front == rear) {
		printf("������ ����\n");
		return -1;
	}
	return array[front++];

}
