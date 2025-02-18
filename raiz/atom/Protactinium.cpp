#include "Protactinium.hpp"

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
    
atom Protactinium ;
void create_Protactinium(){
Protactinium.atom_name = "Protactinium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Protactinium");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Pa");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "91");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "231.03588");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "15370");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "1845.15");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "4273.15");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "1845");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "4273");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "7991000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "15");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "470");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "478.2");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "47");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.000015000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "5");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.5");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "f");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "7");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ne]3s23p5");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-13-3");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "5600000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "1.4");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.000000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.0000000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.0005000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "I4/mmm");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "139");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "1034133520000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "1491179660000");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "AlphaEmission");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "4K11/2");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "500");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "9.5");
Protactinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "5");
Protactinium.my_atom_str_v.push_back(proprety) ;
}
