//
// Created by Peter on 28/06/2021.
//

#include "maxHeap.h"
#include "minHeap.h"

maxHeap::maxHeap(int size, double *inputArray) {
    heapSize = size;
    ind = new int[heapSize];
    heap = new double[heapSize];

    for (int i = 0; i <heapSize; ++i){
        ind[i] = i;
    }
    std::copy(inputArray, inputArray+heapSize, heap);
    for (int i = heapSize / 2 - 1; i >= 0; i--)
        maxHeapify(i);
}

void maxHeap::maxHeapify(int node) {
    int child = node * 2 + 1;
    while (child < heapSize) {
        if (child + 1 < heapSize && heap[child] < heap[child + 1])
            child++;
        if (heap[node] >= heap[child])
            return;
        else {
            swap(&heap[node], &heap[child]);
            swap(&ind[node],&ind[child]);
            node = child;
            child = node * 2 + 1;
        }
    }
}

void maxHeap::insertion(double newVal,int newInd) {
    if (newVal>heap[0]) return;
    else{
        heap[0] = newVal;
        ind[0] = newInd;
        maxHeapify(0);
    }
}

double * maxHeap::getHeap(){
    return heap;
};

int * maxHeap::getInd() {
    return ind;
}