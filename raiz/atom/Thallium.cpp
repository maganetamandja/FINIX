#include "Thallium.hpp"

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
    
atom Thallium ;
void create_Thallium(){
Thallium.atom_name = "Thallium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Thallium");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Tl");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "81");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "204.3833");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "11850");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "577.15");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "1746.15");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "577");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "1746");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "227000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "4.2");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "165");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "5193.1");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "46");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.000030");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "11220");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.000017000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "26400000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "1200000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "43000000000.00000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "2800000000.00000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "8000000000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.45");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "818");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "3");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.62");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "19.2");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "1707");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-138-1");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSMH6520000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "13");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "6");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "2");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-28-0");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID105005");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16308");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "6700000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "2.38");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Diamagnetic");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.000000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.000036");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00001");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00005");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P63/mmc");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "194");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2P1/2");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "3.4");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.00059999999999999995");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "6");
Thallium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "13");
Thallium.my_atom_str_v.push_back(proprety) ;
}
