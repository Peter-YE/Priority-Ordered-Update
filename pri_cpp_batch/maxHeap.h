//
// Created by Peter on 28/06/2021.
//

#ifndef HEAP_MAXHEAP_H
#define HEAP_MAXHEAP_H
#include <iostream>
#include <algorithm>
class maxHeap {
public:
    maxHeap(int, double *);
    //void heapSort();
    void maxHeapify(int);
    void insertion(double,int);
    double * getHeap();
    int * getInd();
private:
    int heapSize;
    double *heap;
    int *ind;
};


#endif //HEAP_MAXHEAP_H

