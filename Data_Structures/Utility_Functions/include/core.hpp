#ifndef CUTE_CORE_HPP
#define CUTE_CORE_HPP
#include <cstdint>
namespace cute {

    //empty struct. used for template types that are not necessary
    struct empty {};

    int64_t ceil(long long n)
    {
        uint8_t sign {n > 0};
        int64_t whole_n {n};
        return sign ?
               (n > whole_n ? whole_n + 1 : whole_n) :
               (n < whole_n ? whole_n - 1 : whole_n);
    }

    int64_t floor(long long n)
        {return static_cast<int64_t>(n); }


    template<typename T>
    T& genericAssign(T& to, T const& rhs)
    {

    }
}
#endif CUTE_CORE_HPP