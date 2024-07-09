
    #include <iostream>
    #include <vector>
    #include "../elementos_basicos.hpp"
    using namespace std;

    struct atom {
        string atom_name;
        vector<bool_atomic> my_atom_bool_v;
        vector<integer_atomic> my_atom_int_v;
        vector<string_atomic> my_atom_str_v;
        vector<double_atomic> my_atom_d_v;
    };
    
void create_Mercury(){
atom Mercury ;
Mercury.atom_name = "Mercury" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Mercury");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Hg");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "80");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "200.59");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "13534");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "234.32");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "629.88");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Liquid");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "234.32");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "629.88");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "1750");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "2.29");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "59.2");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "8.3");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "13534");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.000015000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "25000000000.00000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "1.000933");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "1407");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "2");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "2");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "0");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "8");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "2809");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-106-7");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "0");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "3");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "0");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "Hydrargyrum");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "12");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "6");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Rn]5f146d107s27p6");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7439-97-6");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID26623");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin1623");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "1000000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "4.154");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Diamagnetic");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0.00000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.000000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.000028");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.00000200000000000000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00003");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00001");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "R_3m");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "166");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "1");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "374");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.063");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "6");
Mercury.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "12");
Mercury.my_atom_str_v.push_back(proprety) ;
}
