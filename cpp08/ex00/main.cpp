#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> container;
    container.push_back(10);
    container.push_back(20);
    container.push_back(30);
    container.push_back(40);
    int nums[2] = {20, 90};
    try
    {
        easyfind(container, nums[0]);
        std::cout << "Value " << nums[0] << " found!" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        easyfind(container, nums[1]);
        std::cout << "Value " << nums[1] << " found!" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}