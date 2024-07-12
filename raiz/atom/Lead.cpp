#include "Lead.hpp"

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
    
atom Lead ;
void create_Lead(){
Lead.atom_name = "Lead" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Lead");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Pb");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "82");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "207.2");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "11340");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "600.61");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "2022.15");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "600.61");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "2022");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "4.77");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "178");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "196");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "35");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.000029");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "10660");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00001800");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "38300000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "1500000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "46000000000.00000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "5600000000.00000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "16000000000.00000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.44");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "1260");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "4");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "2.33");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "35.1");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "3077");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-100-4");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "0");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "2");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "0");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "Plumbum");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "14");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "6");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Xe]4f66s2");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "SlateGray");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7439-92-1");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID73212");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16240");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "4800000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "7.2");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Diamagnetic");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0.00000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.000000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.00002");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.00000100000000000000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.00000100000000000000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00014");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00099");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.00017");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Fm_3m");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "225");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "3");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "0.171");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.00003000000000000000");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "6");
Lead.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "14");
Lead.my_atom_str_v.push_back(proprety) ;
}
