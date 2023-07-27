#ifndef CUTE_CORE_HPP
#define CUTE_CORE_HPP
namespace cute {
    long long ceil(unsigned long long n, long long divisor)
        {return n/divisor + bool(n % divisor);}

    template<typename T>
    T* rawMemory(int n)
        {return (T*)::operator new(sizeof(T) * n);}

    void rawDelete(void* array)
        {::operator delete(array);}

    template<typename T>
    void rawDestruct(T* array, int size)
    {
        for(int i = 0; i < size; i++)
            array[i].~T();
        rawDelete(array);
    }
}
#endif CUTE_CORE_HPP