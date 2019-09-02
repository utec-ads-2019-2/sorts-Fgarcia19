#ifndef COUNTING_H
#define COUNTING_H

#include "sort.h"
#include <algorithm>


class CountingSort : public Sort {       
    public:
        CountingSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {

            int min = *(std::min_element(elements, elements + size));
            int max = *(std::max_element(elements, elements + size));
            int index[max - min+1];
            int cuenta[max - min+1];
            int aux=0;

            for (int i = 0; min < max+1; i++, min++) {
                index[i] = min;
                cuenta[i] = count(elements, elements + size, min);
            }

            for (int i = 0; i < sizeof(index)/sizeof(*index); i++) {
                if(cuenta[i]!=0){
                    for(int j=0;j<cuenta[i];j++){
                        elements[aux]=index[i];
                        aux++;
                    }
                }

            }
        }

        inline string name() { return "CountingSort"; }
};

#endif