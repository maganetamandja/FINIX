#include "Iron.hpp"

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
    
atom Iron ;
void create_Iron(){
Iron.atom_name = "Iron" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Iron");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Fe");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "26");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "55.845");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "7874");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "1811.15");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "3134.15");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "1811");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "3134");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "13.8");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "347");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "80");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.000012");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "6980");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00000700");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "490000000.00000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "4000000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "608000000.000000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "170000000000.00000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "82000000000.00000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "211000000000.000000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.29");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "4910");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "3");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.83");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "15.7");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "373.15");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.1");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "3089");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-096-4");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "1");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "1");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "0");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "Ferrum");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "8");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "4");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Rn]5f97s2");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Gray");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7439-89-6");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23925");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin6845");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "10000000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Ferromagnetic");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "1043");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.11");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.1");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "22");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "6.3");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.006");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Im_3m");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "229");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "5D4");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "2.56");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.0015");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "4");
Iron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "8");
Iron.my_atom_str_v.push_back(proprety) ;
}
