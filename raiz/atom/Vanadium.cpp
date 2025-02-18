#include "Vanadium.hpp"

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
    
atom Vanadium ;
void create_Vanadium(){
Vanadium.atom_name = "Vanadium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Vanadium");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "V");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "23");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "50.9415");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "6110");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "2183.15");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "3680.15");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "2183");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "3680");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "27200000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "22.8");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "453");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "321.2");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "31");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "5500");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00000800");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "628000000.000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "7000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "628000000.000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "160000000000.00000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "47000000000.00000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "128000000000.000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.37");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "4560");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "5");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.63");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "50.6");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.1");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "3089");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-171-1");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "1");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "2");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "0");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSVS7700000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "5");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "4");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ar]3d104s24p4");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-62-2");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23990");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin49047");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "5000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "5.4");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.0000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.0003840");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.0001");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.00004000000000000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.0061");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.019");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0.00000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.00000300000000000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Im_3m");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "229");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "4F3/2");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "5.06");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.0033");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "4");
Vanadium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "5");
Vanadium.my_atom_str_v.push_back(proprety) ;
}
