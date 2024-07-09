
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
    
void create_Magnesium(){
atom Magnesium ;
Magnesium.atom_name = "Magnesium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Magnesium");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Mg");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "12");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "24.305");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "1738");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "923.15");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "1363.15");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "923");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "1363");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "8.7");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "128");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "-668");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "130");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "160");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "1584");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.00001400");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "260000000.00000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "2500000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "45000000000.00000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "17000000000.00000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "45000000000.00000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.29");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "4602");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "2");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.31");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "0");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "745.15");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "773.15");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "4.1");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "2950");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-104-6");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "1");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "0");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "1");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSRN1100000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "s");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "2");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "3");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Xe]4f145d66s2");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7439-95-4");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID888");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16207");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "NSC529832");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "23000000.00000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "Paramagnetic");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.000000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.00001");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0.06");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0.07");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "12");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "2.9");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0.13");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0.027");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "0.000000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "0.00000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "0.000000");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "P63/mmc");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "194");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "Inf");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "Inf");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "1");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "0.063");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.0001");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "3");
Magnesium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "2");
Magnesium.my_atom_str_v.push_back(proprety) ;
}
