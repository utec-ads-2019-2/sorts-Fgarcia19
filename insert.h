#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort : public Sort {
    public:
        InsertSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
//            int aux;
//            for (int i = 1; i < size; i++)
//            {
//                aux = elements[i];
//                for(int j=i-1;j>=0;j--){
//                    if(elements[j]>aux){
//                        elements[j+1]=elements[j];
//                    }
//                    elements[j+1]=aux;
//                }
//
//            }
            for (int i = 1; i < size; i++) {
                int aux=elements[i];
                int j = i - 1;
                while (elements[j] > aux && j >= 0) {
                    elements[j+1]=elements[j];
                    j--;
                }
                elements[j+1]=aux;
            }
        }

        inline string name() { return "InsertSort"; }
};

#endif