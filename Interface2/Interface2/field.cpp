#include "field.hpp"
#include <string>

// --------------------------------

IField::IField(std::string _Name) {
    Name = _Name;
}


QuantumFieldTheory::QuantumFieldTheory(std::string _name, std::string _objective): IField(_name) {
    name = _name;
    objective = _objective;
}
std::string QuantumFieldTheory::getName() { return name; }
std::string QuantumFieldTheory::getObjective() { return objective; }


QuantumDynamics::QuantumDynamics(std::string _name, std::string _objective): IField(_name) {
    name = _name;
    objective = _objective;
}
std::string QuantumDynamics::getName() { return name; }
std::string QuantumDynamics::getObjective() { return objective; }

// --------------------------------


