
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
    
void create_Thorium(){
atom Thorium ;
Thorium.atom_name = "Thorium" ;
string_atomic proprety ;
proprety.set_string_atomic("Name", "Thorium");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Symbol", "Th");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Number", "90");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Weight", "232.0381");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density", "11724");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Melting_Point", "2023.15");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Boiling_Point", "5093.15");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Phase", "Solid");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Melting_Point", "2023");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Absolute_Boiling_Point", "5093");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Pressure", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Critical_Temperature", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Fusion", "16");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Vaporization", "530");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Heat_of_Combustion", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Specific_Heat", "132");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Adiabatic_Index", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neel_Point", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Conductivity", "54");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Thermal_Expansion", "0.00001");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Density_Liquid", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Volume", "0.000020000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Brinell_Hardness", "400000000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mohs_Hardness", "3000000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Vickers_Hardness", "350000000.00000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Bulk_Modulus", "54000000000.00000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Shear_Modulus", "31000000000.00000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Young_Modulus", "79000000000.00000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Poisson_Ratio", "0.27");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Refractive_Index", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Speed_of_Sound", "2490");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Valence", "4");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electronegativity", "1.3");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("ElectronAffinity", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Autoignition_Point", "403.15");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Flashpoint", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Hazard_Class", "7");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("DOT_Numbers", "2975");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("EU_Number", "EU231-139-7");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Fire_Rating", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Health_Rating", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NFPA_Reactivity_Rating", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("RTECS_Number", "RTECSYO7175000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Alternate_Names", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Block", "f");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Group", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Period", "7");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electron_Configuration", "[Xe]4f145d46s2");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Color", "Silver");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gas_phase", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CAS_Number", "CAS7440-29-1");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("CID_Number", "CID23960");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Gmelin_Number", "Gmelin16314");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("NSC_Number", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Type", "Conductor");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Electrical_Conductivity", "6700000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Resistivity", "0.00000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Superconducting_Point", "1.38");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Magnetic_Type", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Curie_Point", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Mass_Magnetic_Susceptibility", "0.00000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Molar_Magnetic_Susceptibility", "0.000000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Volume_Magnetic_Susceptibility", "0.000062");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Universe", "0");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Sun", "0");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Meteorites", "0.00000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Earths_Crust", "0.00059999999999999995");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Oceans", "0");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Percent_in_Humans", "0");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Atomic_Radius", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Covalent_Radius", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Van_der_Waals_Radius", "");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Name", "Fm_3m");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Space_Group_Number", "225");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("HalfLife", "443452400000000000.0000000000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Lifetime", "639788900000000000.0000000000");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Decay_Mode", "AlphaEmission");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Quantum_Numbers", "3F2");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Cross_Section", "7.4");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Neutron_Mass_Absorption", "0.001");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Period", "9.5");
Thorium.my_atom_str_v.push_back(proprety) ;
proprety.set_string_atomic("Graph.Group", "4");
Thorium.my_atom_str_v.push_back(proprety) ;
}
