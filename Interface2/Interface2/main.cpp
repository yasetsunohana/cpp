#include "field.hpp"
#include <iostream>

using namespace std;

//void print_QFT_Info(QuantumFieldTheory* ptr) {
//    cout << ptr->getName() << endl;
//    cout << ptr->getObjective() << endl;
//}

//void print_QD_Info(QuantumDynamics* ptr) {
//    cout << ptr->getName() << endl;
//    cout << ptr->getObjective() << endl;
//}


template <typename T>
void print_Info(T* ptr) {
    cout << ptr->getName() << endl;
    cout << ptr->getObjective() << endl;
}


int main(int argc, const char * argv[]) {
    
    QuantumFieldTheory qft("QFT", "descripted by the Wave format for everything");
    //print_QFT_Info(&qft);
    print_Info<QuantumFieldTheory>(&qft);
    
    
    QuantumDynamics qd("Quantum Dynamics", "described by stochastic wave for one quantum particle");
    //print_QD_Info(&qd);
    print_Info<QuantumDynamics>(&qd);
    
    return 0;
}


