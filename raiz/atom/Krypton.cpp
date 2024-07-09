
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
    
void create_Krypton(){
atom Krypton ;
Krypton.atom_name = "Krypton" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Krypton");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Kr");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "36");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "83.798");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "3.75");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "115.79");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "119.93");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Gas");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "115.79");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "119.93");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "209.41");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "1.64");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "9.02");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "1/?");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "0.00943");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.02235");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "1.000427");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "1120");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "2");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "3");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "0");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "2.2");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "1970");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-098-5");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "p");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "18");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "4");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Rn]5f146d107s2");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Colorless");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "Monoatomic");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7439-90-9");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID5416");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16201");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Diamagnetic");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "-0.00000");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "-0.000000");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "-0.000000");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.00000400000000000000");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00000");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0.00000");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.00000");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.00000");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Fm_3m");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "225");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "1");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "25");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.013");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "4");
Krypton.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "18");
Krypton.my_atom_str_v.push_back(proprety) ;
}
