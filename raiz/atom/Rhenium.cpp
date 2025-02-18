#include "Rhenium.hpp"

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
    
atom Rhenium ;
void create_Rhenium(){
Rhenium.atom_name = "Rhenium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Rhenium");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Re");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "75");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "186.207");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "21020");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "3459.15");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "5869.15");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "3459");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "5869");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "33");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "705");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "48");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "18900");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.000009000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "1320000000.000000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "7000000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "2450000000.000000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "370000000000.00000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "178000000000.000000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "463000000000.000000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.3");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "4700");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "7");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.9");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "14.5");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-124-5");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "7");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "6");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Rn]5f146d107s1");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Gray");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-15-5");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23947");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16243");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "NSC600662");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "5600000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "1.7");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.000000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.000097");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00001");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P63/mmc");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "194");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "6S5/2");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "90");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.016");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "6");
Rhenium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "7");
Rhenium.my_atom_str_v.push_back(proprety) ;
}
