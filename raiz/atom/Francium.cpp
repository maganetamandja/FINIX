#include "Francium.hpp"

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
    
atom Francium ;
void create_Francium(){
Francium.atom_name = "Francium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Francium");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Fr");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "87");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "223");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "35000000.00000");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "2");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "65");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "1230");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "3");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "0.7");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSVY0686000");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "s");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "1");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "7");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ne]3s1");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-73-5");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "21.7");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "31.7");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "BetaDecay");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2S1/2");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "7");
Francium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "1");
Francium.my_atom_str_v.push_back(proprety) ;
}
