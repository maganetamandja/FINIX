
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
    
void create_Actinium(){
atom Actinium ;
Actinium.atom_name = "Actinium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Actinium");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Ac");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "89");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "227");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "10070");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "1323.15");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "3473.15");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "1323");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "3473");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "14");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "400");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "710");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "12");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.000023000");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "3");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.1");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSVW0400000");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "f");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "7");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ne]3s23p2");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-34-8");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Fm_3m");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "225");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "687146210");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "991336894");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "BetaDecay");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2D3/2");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "810");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.079");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "9.5");
Actinium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "3");
Actinium.my_atom_str_v.push_back(proprety) ;
}
