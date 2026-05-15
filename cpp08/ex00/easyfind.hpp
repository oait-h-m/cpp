#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> 
#include <stdexcept> 

template <typename T> 
typename T::iterator easyfind(T &container, int search)
{
    typename T::iterator it = std::find(container.begin(), container.end(), search);
    if (it == container.end())
        throw std::runtime_error("Error: value does not exist in the container");
    return it;
}

#endif