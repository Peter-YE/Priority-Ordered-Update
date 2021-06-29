//
// Created by Peter on 28/06/2021.
//

#ifndef HEAP_MINHEAP_H
#define HEAP_MINHEAP_H
#include <iostream>
#include <algorithm>
class minHeap {
public:
    minHeap(int, float *);
    //void heapSort();
    void minHeapify(int);
    void insertion(float,int);
    float * getHeap();
    int * getInd();
private:
    int heapSize;
    float *heap;
    int *ind;
};

template<typename T>
void swap(T *left, T *right){
    T temp = *left;
    *left = *right;
    *right = temp;
}
#endif //HEAP_MINHEAP_H

