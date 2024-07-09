
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

atom Hydrogen ;

void create_hydrogen(){


Hydrogen.atom_name = "Hydrogen" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Hydrogen");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "H");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "1");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "1.00794");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "0.0899");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "14.01");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "20.28");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Gas");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "14.01");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "20.28");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "1293000");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "32.97");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "0.558");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "0.452");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "14300");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "1/?");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "0.1805");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.01121");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "1.000132");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "1270");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "1");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "2.2");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "72.8");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "808.65");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "255.15");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "2.1");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "1966");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU215-605-7");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "4");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "3");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "0");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSMW8900000");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "s");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "1");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "1");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "1s1");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Colorless");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "Diatomic");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS1333-74-0");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID783");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin3");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Diamagnetic");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0.000000");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.00000");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.000000");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "75");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "75");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "2.4");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.15");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "11");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "10");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.00000");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.00000");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.00000");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P63/mmc");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "194");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2S1/2");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "0.332");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.011");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "1");
Hydrogen.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "1");
Hydrogen.my_atom_str_v.push_back(proprety) ;
}

int main(){

    create_hydrogen();
    cout<<"name : "<<Hydrogen.atom_name<<endl;

    for (int i=0;i<Hydrogen.my_atom_str_v.size();++i){

        cout<<i<<endl;
        
        cout<<Hydrogen.my_atom_str_v[i].get_name()<<" = "<<Hydrogen.my_atom_str_v[i].get_value()<<endl;
        cout<<"==============================================="<<endl;
    };
    

    
    return 0;
}