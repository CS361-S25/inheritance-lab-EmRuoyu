#include "Animal.h"
class Cat : public Animal {

    public:
        Cat(int _age) : Animal(_age){//Calls Animal constructor and gives it age
            //Doesn't do anything else
        }
        std::string GetType() {return "Cat";}
        
        int GetAge() {
            return Animal::GetAge() * 5;
        }
        emp::Ptr<Animal> Reproduce() {
            return new Cat(0); 
        }

};