#include ".hpp"

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
    
atom  ;
void create_(){
.atom_name = "" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "");
.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "");
.my_atom_str_v.push_back(proprety) ;
}
