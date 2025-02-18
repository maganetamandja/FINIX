#include "Neodymium.hpp"

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
    
atom Neodymium ;
void create_Neodymium(){
Neodymium.atom_name = "Neodymium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Neodymium");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Nd");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "60");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "144.24");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "7010");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "1294.15");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "3373.15");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "1294");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "3373");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "7.1");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "285");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "388");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "19.2");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "17");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "6890");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00002100");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "265000000.000000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "343000000.000000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "32000000000.00000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "16000000000.00000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "41000000000.00000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.28");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "2330");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "3");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.14");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "50");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-109-3");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSZG8600000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "f");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "6");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ar]3d104s2");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-00-8");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23934");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16212");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "1600000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Paramagnetic");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.00000000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.0033650");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.00000100000000000000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00005000000000000000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.0033");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0.00000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P63/mmc");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "194");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "5I4");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "49");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.011");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "8.5");
Neodymium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "6");
Neodymium.my_atom_str_v.push_back(proprety) ;
}
