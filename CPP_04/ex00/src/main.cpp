/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:53:36 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:53:37 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* wrongCat = new WrongCat();

    dog->makeSound();
    cat->makeSound();
    animal->makeSound();
    wrongCat->makeSound();

    delete animal;
    delete dog;
    delete cat;
    delete wrongCat;
    return 0;
}
