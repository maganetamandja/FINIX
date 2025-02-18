#include "Ununquadium.hpp"

    #include <iostream>
    #include <vector>
    #include "../elementos_basicos.hpp"
    using namespace std;

    /*struct atom {
        string atom_name;
        vector<bool_atomic> my_atom_bool_v;
        vector<integer_atomic> my_atom_int_v;
        vector<string_atomic> my_atom_str_v;
        vector<double_atomic> my_atom_d_v;
    };*/
    
atom Ununquadium ;
void create_Ununquadium(){
Ununquadium.atom_name = "Ununquadium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Ununquadium");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Uuq");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "114");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "289");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "14");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "7");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Rn]5f146d97s1");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS54085-16-4");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "1.33");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "2");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "AlphaEmission");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "3");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "7");
Ununquadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "14");
Ununquadium.my_atom_str_v.push_back(proprety) ;
}
