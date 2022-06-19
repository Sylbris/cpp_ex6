#include <iostream>
#include <random>

class Generator {
    std::default_random_engine generator;
    std::normal_distribution<double> distribution;
    double min;
    double max;
public:
    Generator(double mean, double stddev, double min, double max):
        distribution(mean, stddev), min(min), max(max)
    {}

    int operator ()() {
        while (true) {
            int number = this->distribution(generator);
            if (number >= this->min && number <= this->max)
                return number;
        }
    }
};