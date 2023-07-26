#ifndef CUTE_CORE_HPP
#define CUTE_CORE_HPP
namespace cute {
    long long ceil(unsigned long long n, long long divisor)
        {return n/divisor + bool(n % divisor)}

}
#endif CUTE_CORE_HPP