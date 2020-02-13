//
// Created by Fidelia Nawar on 2/3/20.
//

#ifndef INC_20S_3353_PA01_WORSTFIT_H
#define INC_20S_3353_PA01_WORSTFIT_H

#include "Allocator.h"

class WorstFit: public Allocator {
public:

    WorstFit();

    void worstFit(int blockSize[], int m, int processSize[], int n);

    void* allocateMemory(size_t val);

    void deallocate(void* pointer);

};

#endif //INC_20S_3353_PA01_WORSTFIT_H
