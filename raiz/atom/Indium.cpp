#include "Indium.hpp"

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
    
atom Indium ;
void create_Indium(){
Indium.atom_name = "Indium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Indium");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "In");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "49");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "114.818");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "7310");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "429.75");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "2345.15");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "429.75");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "2345");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "3.26");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "230");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "144");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "82");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.000032");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "7020");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00001600");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "8830000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "1200000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "11000000000.00000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "1215");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "3");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.78");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "28.9");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.1");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "3089");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-180-0");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSMG4600000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "13");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "5");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Xe]4f145d26s2");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-74-6");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID5359967");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin1081");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "12000000.00000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "3.41");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Diamagnetic");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0.00000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.000000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.000010");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00002");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "I4/mmm");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "139");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2P1/2");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "194");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.06");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "5");
Indium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "13");
Indium.my_atom_str_v.push_back(proprety) ;
}
