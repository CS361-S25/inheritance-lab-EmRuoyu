#include "Animal.h"
class Dog : public Animal {
    int num_spots;

    public:
        Dog(int _age, int _num_spots) : Animal(_age), //Calls Animal constructor and gives it age
        num_spots(_num_spots) { //Sets num_spots
            //Doesn't do anything else
        }
        std::string GetType() {return "Dog";}
        
        int GetAge() {
            return Animal::GetAge() * 7;
        }
        int GetSpots() {return num_spots;}
        emp::Ptr<Animal> Reproduce() {
            return new Dog(0, GetSpots()); //assuming it should have the same number of spots as parent
        }
};