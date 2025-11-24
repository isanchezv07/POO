#include <iostream>

using namespace std;

class Animal{
    private:
        string name;
        int id, age;
        double weight;
    public:
        Animal(){
            name = "animal";
            id = 0;
            age = 0;
            weight = 0;
        }
        Animal(string name, int id, int age, double weight){
            this->name = name;
            this->id = id;
            this->age = age;
            this->weight = weight;
        }
        void changeName(string name){
            this->name = name;
        }
        double eat(){
            return weight * age;
        }
};