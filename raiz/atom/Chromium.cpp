
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
    
void create_Chromium(){
atom Chromium ;
Chromium.atom_name = "Chromium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Chromium");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Cr");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "24");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "51.9961");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "7140");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "2180.15");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "2944.15");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "2180");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "2944");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "20.5");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "339");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "393");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "94");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "6300");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00000700");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "1120000000.000000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "8500000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "1060000000.000000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "160000000000.00000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "115000000000.000000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "279000000000.000000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.21");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "5940");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "6");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.66");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "64.3");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "673.15");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.1");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "3089");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-157-5");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "1");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "2");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "1");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "6");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "4");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Rn]5f67s2");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-47-3");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23976");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16274");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "7900000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Antiferromagnetic");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.000000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.0000000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.0003180");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.0015");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.002");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.3");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.014");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.00000300000000000000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Im_3m");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "229");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "7S3");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "3.1");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.0021");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "4");
Chromium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "6");
Chromium.my_atom_str_v.push_back(proprety) ;
}
