#ifndef BUBBLE_H
#define BUBBLE_H

#include "sort.h"
#include <algorithm>

class BubbleSort : public Sort {       
    public:
        BubbleSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {

            bool desordenado = true;
            while (desordenado) {
                desordenado=false;
                for (int i = 0; i < size; i++) {
                    if (elements[i] > elements[i + 1]) {
                        swap(elements[i], elements[i + 1]);
                        desordenado=true;
                    }
                }
            }
        }

        inline string name() { return "BubbleSort"; }
};

#endif