#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "=========================================\n";
	Cat cat1;
	cat1.getBrain()->setIdea(0, "sleep all day");
	std::cout << cat1.getBrain()->getIdea(0) << std::endl;
	Animal *animals[2];
	animals[0] = new Cat();
	animals[1] = new Dog();

	for (int i = 0; i < 2; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 2; i++)
		delete animals[i];

    return 0;
}

