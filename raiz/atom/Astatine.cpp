#include "Astatine.hpp"

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
    
atom Astatine ;
void create_Astatine(){
Astatine.atom_name = "Astatine" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Astatine");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "At");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "85");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "210");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "575.15");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "575");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "5043000");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "6");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "40");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "919");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "2");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "7");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "2.2");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "270.1");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSRS2060000");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "17");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "6");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[He]2s22p4");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-68-8");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "29016");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "42120");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "BetaPlusDecay");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2P3/2");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "6");
Astatine.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "17");
Astatine.my_atom_str_v.push_back(proprety) ;
}
