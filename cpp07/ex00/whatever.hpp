#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template    <typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template    <typename T>
T min(T value1, T value2)
{
    if (value1 < value2)
        return value1;
    return value2;
}

template    <typename T>
T max(T val1, T val2)
{
    if (val1 > val2)
        return val1;
    return val2;
}

#endif