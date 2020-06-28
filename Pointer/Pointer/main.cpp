//
//  main.cpp
//  Pointer
//
//  Created by aqua on 2020/06/28.
//  Copyright © 2020 Pointer. All rights reserved.
//

#include "Account.hpp"
#include <iostream>


using namespace std;

void print_Account(std::string title, Account* p) {
    cout << title
         << "\"" << p->name() << "\" (" << p->no() << ") "
         << p->balance() << "JPY" << endl;
}

int main(int argc, const char * argv[]) {
    
    // ---------------------
    int n = 135;
    int* ptr = &n;
    
    cout << ptr << endl;
    cout << *ptr << endl;
    // ---------------------
    
    
    // ---------------------
    Account suzuki("Suzuki Ryuuichi", "12345678", 1000);
    Account takeda("Takeda Hirohumi", "87654321", 200);
    
    suzuki.withdraw(200);
    takeda.deposit(100);
    
    cout << "Suzuki: " << suzuki.balance() << endl;
    cout << "Takeda: " << takeda.balance() << endl;
    
    print_Account("Suzuki_Account_Info: ", &suzuki);
    print_Account("Takeda_Account_Info: ", &takeda);
    // ---------------------
    
    return 0;
}


