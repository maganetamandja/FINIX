#include "Rubidium.hpp"

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
    
atom Rubidium ;
void create_Rubidium(){
Rubidium.atom_name = "Rubidium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Rubidium");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Rb");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "37");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "85.4678");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "1532");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "312.46");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "961.15");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "312.46");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "961");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "9400000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "2093");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "2.19");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "72");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "242");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "58");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "1460");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00005600");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "216000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "300000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "2500000000.00000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "2400000000.00000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "1300");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "1");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "0.82");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "46.9");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.3");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "1423");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-126-6");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "3");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "2");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSFK9225000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "s");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "1");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "5");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Xe]6s1");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-17-7");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID5357696");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16244");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "8300000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.000000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.000004");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.00000100000000000000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.00000300000000000000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00032");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.006");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0.00001");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.00046");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Im_3m");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "229");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2S1/2");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "0.38");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.00029999999999999997");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "5");
Rubidium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "1");
Rubidium.my_atom_str_v.push_back(proprety) ;
}
