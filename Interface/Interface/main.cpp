#include "field.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    QuantumFieldTheory qft("QFT", "descripted by the Wave format for everything");
    cout <<  qft.getName() << endl;
    cout <<  qft.getObjective() << endl;
    
    QuantumDynamics qd("Quantum Dynamics", "described by stochastic wave for one quantum particle");
    cout <<  qd.getName() << endl;
    cout <<  qd.getObjective() << endl;
    
    return 0;
}


