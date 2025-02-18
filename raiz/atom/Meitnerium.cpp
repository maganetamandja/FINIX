#include "Meitnerium.hpp"

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
    
atom Meitnerium ;
void create_Meitnerium(){
Meitnerium.atom_name = "Meitnerium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Meitnerium");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Mt");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "109");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "268");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "238");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "9");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "7");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Kr]4d75s1");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS54038-01-6");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "30");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "43.3");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "AlphaEmission");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "4F9/2");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "7");
Meitnerium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "9");
Meitnerium.my_atom_str_v.push_back(proprety) ;
}
