#include <iostream>

#include "minHeap.h"

using namespace std;
int main() {
    float array[8];
    for (int i = 0; i<8;++i){
        array[i] = (float) i+93;
    }
    minHeap window(3, array);
    for (int i = 3; i<8;++i){
        window.insertion(array[i],i);
    }
    cout<<window.getInd()[2]<<','<<window.getInd()[1]<<','<<window.getInd()[0]<<endl;
}

