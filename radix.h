#ifndef RADIX_H
#define RADIX_H

#include "sort.h"
#include <math.h>
#include <algorithm>

class RadixSort : public Sort {       
    public:
        RadixSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int max=*max_element(elements,elements+size+1);
            int i=log10(max);
        for(int j=0;j<=i;j++){
                for(int a=0;a<size;a++){
                    for(int b=0;b<size-a;b++){
                        int auxA=elements[b]/pow(10,j);
                        int auxB=elements[b+1]/pow(10,j);
                        if((auxA%10)>(auxB%10)){
                            swap(elements[b],elements[b+1]);
                        }
                    }
                }
            }
            }


        inline string name() { return "RadixSort"; }
};

#endif