#include "Hafnium.hpp"

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
    
atom Hafnium ;
void create_Hafnium(){
Hafnium.atom_name = "Hafnium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Hafnium");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Hf");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "72");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "178.49");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "13310");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "2506.15");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "4876.15");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "2506");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "4876");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "25.5");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "630");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "230");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "23");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "12000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.000013000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "1700000000.00000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "5500000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "1760000000.000000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "110000000000.00000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "30000000000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "78000000000.00000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.37");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "3010");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "4");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.3");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "0");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.2");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "2545");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-166-4");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSEU9800000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "4");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "6");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Kr]4d105s2");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Gray");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-58-6");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23986");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16293");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "3300000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "0.128");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.000000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.000071");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00002");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00033");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.00000");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P63/mmc");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "194");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "3F2");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "104");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.02");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "6");
Hafnium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "4");
Hafnium.my_atom_str_v.push_back(proprety) ;
}
