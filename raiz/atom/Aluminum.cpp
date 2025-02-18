#include "Aluminum.hpp"

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
    
atom Aluminum ;
void create_Aluminum(){
Aluminum.atom_name = "Aluminum" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Aluminum");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Al");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "13");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "26.981538");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "2700");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "933.47");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "2792.15");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "933.47");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "2792");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "16000000.00000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "10.7");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "293");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "757");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "235");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.000023");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "2375");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.000010");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "245000000.000000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "2750000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "167000000.000000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "76000000000.00000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "26000000000.00000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "70000000000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.35");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "5100");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "3");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.61");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "42.5");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "673.15");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "918.15");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.3");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "1396");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-072-3");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "1");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "0");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "1");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSTS6460000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "Aluminium");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "13");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "3");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Ar]4s1");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7429-90-5");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID5359268");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16248");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "38000000.00000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "1.175");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Paramagnetic");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.00000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.000021");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.005");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.006");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.91");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "8.1");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.00009000000000000001");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.000000");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Fm_3m");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "225");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2P1/2");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "0.233");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.03");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "3");
Aluminum.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "13");
Aluminum.my_atom_str_v.push_back(proprety) ;
}
