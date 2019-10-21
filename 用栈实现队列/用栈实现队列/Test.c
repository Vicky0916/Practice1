//用栈实现队列

MyQueue* myQueueCreate()
{
	MyQueue *q = (MyQueue)malloc(sizeof(MyQueue));
	StackInit(&(q->Pushst));
	StackInit(&(q->Popst));
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) 
{
	StackPush(obj->tail, x);

}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {

}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {

}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) {

}

void myQueueFree(MyQueue* obj) {

}