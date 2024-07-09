
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
    
void create_Lutetium(){
atom Lutetium ;
Lutetium.atom_name = "Lutetium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Lutetium");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Lu");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "71");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "174.967");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "9841");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "1936.15");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "3675.15");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "1936");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "3675");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "22");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "415");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "16");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "9300");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00001800");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "893000000.000000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "1160000000.000000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "48000000000.00000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "27000000000.00000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "69000000000.00000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.26");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "3");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.27");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "50");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.1");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "3089");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-103-0");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "d");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "3");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "6");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Rn]5f146d37s2");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7439-94-3");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23929");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16202");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "1800000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "0.1");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.00000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.000012");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00006");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0.00000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.00000");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P63/mmc");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "194");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "2D3/2");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "84");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.022");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "8.5");
Lutetium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "17");
Lutetium.my_atom_str_v.push_back(proprety) ;
}
