#include <iostream>
#include <vector>
#include "../elementos_basicos.hpp"
#include "../atom/Hydrogen.hpp"
using namespace std;


int main(){

    create_Hydrogen();

    for (int i=0;i<Hydrogen.my_atom_str_v.size();++i){

        cout<<"name : "<<Hydrogen.atom_name<<endl;
        cout<<Hydrogen.my_atom_str_v[i].get_name()<<" = "<<Hydrogen.my_atom_str_v[i].get_value()<<endl;
        cout<<"==============================================="<<endl;
    };
    

    
    return 0;
}