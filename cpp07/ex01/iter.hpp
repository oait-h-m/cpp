#ifndef ITER_HPP
#define ITER_HPP

template    <typename T> 
void    iter(T* const array, int const length, void (*func)(T const &))
{
    if (!array || !func || length < 0)
        return;
    for (int i = 0; i < length; i++)
        func(array[i]);
}

template    <typename T>
void    iter(T *array, int const length, void (*func)(T&))
{
    if (!array || !func || length < 0)
        return;
    for (int i = 0; i < length; i++)
        func(array[i]);
}

#endif