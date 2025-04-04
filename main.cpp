#include <iostream>
#include "Empirical/include/emp/math/Random.hpp"
class Organism {
    public:
        double trait;
        Organism(double t) : trait(t) {}

        Organism* reproduce() {
           Organism* child = new Organism(trait);
           return child;
        }
};

int main() {
    emp::vector<Organism> population;
    
    for (int i = 0; i < 100; ++i) {
        population.push_back(*new Organism(0.5));
    }
    std::cout << "Population trait: " << population[0].trait << std::endl;
    
}
    