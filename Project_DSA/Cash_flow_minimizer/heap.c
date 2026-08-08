#include"heap.h"

void swap(HeapNode *a, HeapNode *b) {
    HeapNode temp = *a;
    *a = *b;
    *b = temp;
}

void initHeap(MaxHeap *heap) {
    (*heap).size = 0;
}


void HeapPush(MaxHeap *heap ,int userId ,double amount ){

    if ((*heap).size >= HEAP_MAX || amount <= 0.0001) {
        return;
    }

    int index = (*heap).size++;

    (*heap).items[index].userId = userId;
    (*heap).items[index].amount = amount;

    while(index > 0) {

        int parent = (index - 1) / 2;

        if ((*heap).items[parent].amount >=
            (*heap).items[index].amount) {
            break;
        }

        swap(&(*heap).items[parent], &(*heap).items[index]);

        index = parent;
    }
}

HeapNode HeapPop(MaxHeap *heap) {

    HeapNode top = {0, 0.0};

    if ((*heap).size == 0) {
        return top;
    }

    top = (*heap).items[0];

    (*heap).items[0] = (*heap).items[--(*heap).size];

    int index = 0;

    while(1){
        int left = index *2+1;
        int right = index *2+2;

        int largest = index;

        if (left < (*heap).size &&
            (*heap).items[left].amount >
            (*heap).items[largest].amount) {
            largest = left;
        }
       
        if (right < (*heap).size &&
            (*heap).items[right].amount >
            (*heap).items[largest].amount) {
            largest = right;
        }

        if (largest == index) {
            break;
        }

        swap(&(*heap).items[index], &(*heap).items[largest]);
        index = largest;
    }

    return top;
}

int heapIsEmpty(const MaxHeap *heap) {
    return (*heap).size == 0;
}