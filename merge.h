#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

class MergeSort : public Sort {       
    public:
        MergeSort(int *elements, size_t size) : Sort(elements, size) {}

        void mergue(int from,int to){
            for(int i=from;i<=to;i++){
                swap(*min_element(elements+i,elements+to+1),elements[i]);
            }
        }

        void merguesort(int from,int to){
            int mid;
            if(from<to) {
                mid = (from + to) / 2;
                merguesort(from, mid);
                merguesort(mid + 1, to);

                mergue(from, to);
            }

        }

        void execute() {
            merguesort(0,size);
        }

        inline string name() { return "MergeSort"; }
};

#endif