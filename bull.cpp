#include "bull.h"

Bull::Bull(int weight, int liftcapacity, std::string name) {
    this->name = name;
    this->weight = weight;
    this->liftcapacity = liftcapacity;
}

std::string Bull::to_string(void) {
    return "Bull from merk " + name + " with a weight of " + std::to_string(weight) + "kg and a liftcapacity of " + std::to_string(liftcapacity) + "kg";
}