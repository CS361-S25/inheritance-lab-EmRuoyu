#ifndef ANIMAL
#define ANIMAL

class Animal {
    int age;

    public:
    Animal(int _age) : age(_age) {
        //doesn't do anything else
    }
    virtual int GetAge() {return age;}

    virtual std::string GetType() {return "Animal";}

    virtual emp::Ptr<Animal> Reproduce() {
        return new Animal(0);
    }
}; 
#endif