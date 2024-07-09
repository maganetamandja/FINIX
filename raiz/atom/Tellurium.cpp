
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
    
void create_Tellurium(){
atom Tellurium ;
Tellurium.atom_name = "Tellurium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Tellurium");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Te");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "52");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "127.6");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "6240");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "722.66");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "1261.15");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "722.66");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "1261");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "4898000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "17.5");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "48");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "520.33");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "3");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "5700");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00002000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "180000000.00000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "2250000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "65000000000.00000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "16000000000.00000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "43000000000.00000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "1.000991");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "2610");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "6");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "2.1");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "190.2");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "613.15");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "6.1");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "2811");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU236-813-4");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "0");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "2");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "0");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSCF2300000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "16");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "5");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ne]3s23p6");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS13494-80-9");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID6327182");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin1153");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "NSC8956");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Semiconductor");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "10000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.0001");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Diamagnetic");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0.00000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.000000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.000024");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.00000100000000000000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00021");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P3121");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "152");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "3P2");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "5.4");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.0013");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "5");
Tellurium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "16");
Tellurium.my_atom_str_v.push_back(proprety) ;
}
