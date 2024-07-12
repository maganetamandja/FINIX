#include "Boron.hpp"

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
    
atom Boron ;
void create_Boron(){
Boron.atom_name = "Boron" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Boron");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "B");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "5");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "10.811");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "2460");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "2348.15");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "4273.15");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "2348");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "4273");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "3390000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "50");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "507");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "1040");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "27");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00000600000000000000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "2080");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00000400");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "9300000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "49000000000.00000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "320000000000.00000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "16200");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "3");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "2.04");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "26.7");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-151-2");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "3");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "2");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "0");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSQW9700000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "13");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "2");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[He]2s22p3");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Black");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-42-8");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID5462311");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16262");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Insulator");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "0.0001");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "10000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Diamagnetic");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0.00000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.000000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.000021");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00016");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00086");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0.00044");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.00006999999999999999");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.00000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.00000");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "R_3m");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "166");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2P1/2");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "755");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "2.4");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "2");
Boron.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "13");
Boron.my_atom_str_v.push_back(proprety) ;
}
