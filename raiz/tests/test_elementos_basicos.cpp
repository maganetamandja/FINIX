#include <iostream>
#include <vector>
#include "../elementos_basicos.hpp"
using namespace std;

struct atom {
    string atom_name;
    vector<bool_atomic> my_atom_bool_v;
    vector<integer_atomic> my_atom_int_v;
    vector<string_atomic> my_atom_str_v;
    vector<double_atomic> my_atom_d_v;
};

int main (){//test the creation and updating of all elemets in the elementos basicos class
    atom carbon_obj;
    carbon_obj.atom_name = "Carbon";

    double_atomic atomic_mass_of_carbon;
    atomic_mass_of_carbon.set_double_atomic("atomic_mass", 12.011);

    carbon_obj.my_atom_d_v.push_back(atomic_mass_of_carbon);

    integer_atomic number_of_electrons;
    number_of_electrons.set_integer_atomic("Number of electrons", 6);
    carbon_obj.my_atom_int_v.push_back(number_of_electrons);
    

    bool_atomic metalic_or_not;
    metalic_or_not.set_bool_atomic("?metalic", false);
    carbon_obj.my_atom_bool_v.push_back(metalic_or_not);

    string_atomic symbol;
    symbol.set_string_atomic("symbol", "C");
    carbon_obj.my_atom_str_v.push_back(symbol);




    cout<<"the atom name is "<<carbon_obj.atom_name<<endl;

    cout<<"the atom Atomic Mass is " << carbon_obj.my_atom_d_v[0].get_value() <<endl; //note that a function is necessary to return the value.

    cout<<"thet number of electrons is " << carbon_obj.my_atom_int_v[0].get_value() <<endl;

    cout<<"Is it metalic ? "<< carbon_obj.my_atom_bool_v[0].get_value()<<endl;

    cout<< "what is the symbol of the atom? "<< carbon_obj.my_atom_str_v[0].get_value()<<endl;
  

    return 0;
}