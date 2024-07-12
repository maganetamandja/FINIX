#include "Ruthenium.hpp"

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
    
atom Ruthenium ;
void create_Ruthenium(){
Ruthenium.atom_name = "Ruthenium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Ruthenium");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Ru");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "44");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "101.07");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "12370");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "2607.15");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "4423.15");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "2607");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "4423");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "25.7");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "580");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "710");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "120");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "10650");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00000800");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "2160000000.000000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "6500000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "220000000000.00000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "173000000000.000000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "447000000000.000000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.3");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "5970");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "6");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "2.2");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "101.3");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.1");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "3089");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-127-1");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSFF5250100");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "8");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "5");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[He]2s22p2");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-18-8");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23950");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16241");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "14000000.00000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "0.49");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Paramagnetic");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.000000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.000067");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00008");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P63/mmc");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "194");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "5F5");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "2.6");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.00089999999999999998");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "5");
Ruthenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "8");
Ruthenium.my_atom_str_v.push_back(proprety) ;
}
