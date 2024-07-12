#ifndef HYDROGEN_H
#define HYDROGEN_H
#include <vector>
#include <iostream>
#include "../elementos_basicos.hpp"

using namespace std;



struct atom {
    string atom_name;
    vector<bool_atomic> my_atom_bool_v;
    vector<integer_atomic> my_atom_int_v;
    vector<string_atomic> my_atom_str_v;
    vector<double_atomic> my_atom_d_v;
};
extern atom Hydrogen ;

void create_hydrogen();

#endif
