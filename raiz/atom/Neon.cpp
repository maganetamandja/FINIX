#include "Neon.hpp"

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
    
atom Neon ;
void create_Neon(){
Neon.atom_name = "Neon" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Neon");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Ne");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "10");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "20.1797");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "0.9");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "24.56");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "27.07");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Gas");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "24.56");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "27.07");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "44.4");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "0.34");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "1.75");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "140");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "1/?");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "0.0491");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.02242");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "1.000067");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "936");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "0");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "0");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "2.2");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "1913");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-110-9");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSWW5505000");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "18");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "2");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Xe]4f145d36s2");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Colorless");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "Monoatomic");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-01-9");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23935");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16211");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Diamagnetic");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0.00000");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.000000");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.000000");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.13");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.1");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0.00000");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.00000");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.00000");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Fm_3m");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "225");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "1");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "0.04");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.00059999999999999995");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "2");
Neon.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "18");
Neon.my_atom_str_v.push_back(proprety) ;
}
