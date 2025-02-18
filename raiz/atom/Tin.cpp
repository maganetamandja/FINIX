#include "Tin.hpp"

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
    
atom Tin ;
void create_Tin(){
Tin.atom_name = "Tin" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Tin");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Sn");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "50");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "118.71");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "7310");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "505.08");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "2875.15");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "505.08");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "2875");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "7");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "290");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "769.7");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "67");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00002");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "6990");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00001600");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "51000000.00000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "1500000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "58000000000.00000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "18000000000.00000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "50000000000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.36");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "2500");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "4");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.96");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "107.3");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "903.15");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-141-8");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "3");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "1");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "3");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSTH3500000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "Stannum");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "14");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "5");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ne]3s23p3");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-31-5");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID5352426");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16300");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "9100000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "3.72");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Paramagnetic");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0.00000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.000000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.000023");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.00000100000000000000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00012");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00022");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.00002000000000000000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "I41/amd");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "141");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "3");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "0.63");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.00020000000000000001");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "5");
Tin.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "14");
Tin.my_atom_str_v.push_back(proprety) ;
}
