#include <iostream>
#include <vector>
#include "../elementos_basicos.hpp"
#include "../atom/hydrogen.hpp"
using namespace std;


int main(){

    create_hydrogen();

    for (int i=0;i<Hydrogen.my_atom_str_v.size();++i){

        cout<<"name : "<<Hydrogen.atom_name<<endl;
        cout<<Hydrogen.my_atom_str_v[i].get_name()<<" = "<<Hydrogen.my_atom_str_v[i].get_value()<<endl;
        cout<<"==============================================="<<endl;
    };
    

    
    return 0;
}