#ifndef HEAP_H
#define HEAP_H

#define HEAP_MAX 100

typedef struct HeapNode {
    int userId;
    double amount;
} HeapNode;

typedef struct MaxHeap {
    HeapNode items[HEAP_MAX];
    int size;
} MaxHeap;

void heapInit(MaxHeap *heap);
void heapPush(MaxHeap *heap, int userId, double amount);
HeapNode heapPop(MaxHeap *heap);
int heapIsEmpty(const MaxHeap *heap);

#endif
