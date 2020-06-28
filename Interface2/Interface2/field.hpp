#ifndef field_hpp
#define field_hpp

#include <stdio.h>
#include <string>

// --------------------------------
//interface(interface is "vitual function group" in case of C++)

class IField {
private:
    std::string Name;
public:
    IField(std::string _Name);
    
    virtual std::string getName() = 0;
    virtual std::string getObjective() = 0;
};

class QuantumFieldTheory: public IField {
private:
    std::string name;
    std::string objective;
public:
    QuantumFieldTheory(std::string _name, std::string _objective);
    std::string getName();
    std::string getObjective();
};

class QuantumDynamics: public IField {
private:
    std::string name;
    std::string objective;
public:
    QuantumDynamics(std::string _name, std::string _objective);
    std::string getName();
    std::string getObjective();
};

// --------------------------------

#endif /* field_hpp */


