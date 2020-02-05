//
// Created by Fidelia Nawar on 1/30/20.
//

#ifndef INC_20S_3353_PA01_ALLOCATOR_H
#define INC_20S_3353_PA01_ALLOCATOR_H
#include <iostream>
#include <fstream>

class Allocator {

private:

    void * mem{};
    std::string allocatorName;

public:

    Allocator();

    explicit Allocator(const std::string& n);

    virtual void* allocateArray(size_t);
    virtual void* allocate(size_t);
    virtual void* allocateWithVal(size_t val, int x);
    virtual void deallocate(void*) noexcept;
    virtual void deallocateArray(void*) noexcept;

    //virtual void* allocateMemory(int size_t = 0) = 0;
    //virtual void free(void*) = 0;

};


#endif //INC_20S_3353_PA01_ALLOCATOR_H
