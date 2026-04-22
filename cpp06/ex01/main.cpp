#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data data;

    data.name = "Oussama";
    data.value = 1337;

    Data* original = &data;

    uintptr_t raw = Serializer::serialize(original);
    Data* restored = Serializer::deserialize(raw);

    std::cout << "Original pointer : " << original << "\n";
    std::cout << "Serialized value : " << raw << "\n";
    std::cout << "Restored pointer : " << restored << "\n";

    if (restored == original)
        std::cout << "OK: pointers are equal" << std::endl;
    else
        std::cout << "ERROR: pointers differ" << std::endl;

    std::cout << "------------>Data<--------------" << std::endl;
    std::cout << "name = " << restored->name << std::endl;
    std::cout << "value = " << restored->value << std::endl;
}