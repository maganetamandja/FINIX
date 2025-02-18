#include "Fluorine.hpp"

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
    
atom Fluorine ;
void create_Fluorine(){
Fluorine.atom_name = "Fluorine" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Fluorine");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "F");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "9");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "18.9984030");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "1.696");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "53.55");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "85.03");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Gas");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "53.5");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "85.03");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "144.13");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "0.26");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "3.27");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "904");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "1/?");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "0.0277");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.011202");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "1.000195");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "1");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "3.98");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "328");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "2.3");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "9192");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-954-8");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "0");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "4");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "4");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSBD0330000");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "17");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "2");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ne]3s23p1");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Colorless");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "Diatomic");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7782-41-4");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID24524");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16281");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.00004000000000000000");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.00005000000000000000");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.0087");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.054");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0.00013");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.0037");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.00000");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.00000");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "C12/c1");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "15");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2P3/2");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "0.0096");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.00002000000000000000");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "2");
Fluorine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "17");
Fluorine.my_atom_str_v.push_back(proprety) ;
}
