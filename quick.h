#ifndef QUICK_H
#define QUICK_H

#include "sort.h"

class QuickSort : public Sort {       
    public:
        QuickSort(int *elements, size_t size) : Sort(elements, size) {}
    void sort(int from,int to) {
        if (from >= to) return;
        int aux = elements[to];
        int count = from;
        for (int i = from; i < to; i++) {
            if (elements[i] < aux) {
                swap(elements[i], elements[count]);
                count++;
            }
        }

        swap(elements[count], elements[to]);
        sort(from, count - 1);
        sort(count + 1, to);
    }


    void execute() {
        sort(0, size);
    }

    inline string name() { return "QuickSort"; }
};

#endif