#include "Berkelium.hpp"

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
    
atom Berkelium ;
void create_Berkelium(){
Berkelium.atom_name = "Berkelium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Berkelium");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Bk");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "97");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "247");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "14780");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "1323.15");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "1323");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "449");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "10");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.000017000");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "4");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.3");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSNO4565500");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "f");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "7");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ar]3d64s2");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-40-6");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P63/mmc");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "194");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "43493660000");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "62796140000");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "AlphaEmission");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "6H15/2");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "710");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "9.5");
Berkelium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "11");
Berkelium.my_atom_str_v.push_back(proprety) ;
}
