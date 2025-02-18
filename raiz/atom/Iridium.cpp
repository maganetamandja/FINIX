#include "Iridium.hpp"

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
    
atom Iridium ;
void create_Iridium(){
Iridium.atom_name = "Iridium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Iridium");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Ir");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "77");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "192.217");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "22650");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "2739.15");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "4701.15");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "2739");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "4701");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "26");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "560");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "150");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "19000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00000800");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "1670000000.000000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "6500000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "1760000000.000000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "320000000000.00000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "210000000000.00000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "528000000000.000000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.26");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "4825");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "6");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "2.2");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "151");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.1");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "3089");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-095-9");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "9");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "6");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Rn]5f146d107s27p2");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7439-88-5");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23924");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16298");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "21000000.00000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "0.11");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Paramagnetic");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.000000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.000052");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00005");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.00000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Fm_3m");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "225");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "4F9/2");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "425");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.08");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "6");
Iridium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "9");
Iridium.my_atom_str_v.push_back(proprety) ;
}
