#!/bin/bash

Atom_Name+=("Hydrogen" "Actinium" "Aluminum" "Americium" "Antimony" "Argon" "Arsenic" "Astatine" "Barium" "Berkelium" "Beryllium" "Bismuth" "Bohrium" "Boron" "Bromine" "Cadmium" "Calcium" "Californium" "Carbon" "Cerium" "Cesium" "Chlorine" "Chromium" "Cobalt" "Copper" "Curium" "Darmstadtium" "Dubnium" "Dysprosium" "Einsteinium" "Erbium" "Europium" "Fermium" "Fluorine" "Francium" "Gadolinium" "Gallium" "Germanium" "Gold" "Hafnium" "Hassium" "Helium" "Holmium" "Indium" "Iodine" "Iridium" "Iron" "Krypton" "Lanthanum" "Lawrencium" "Lead" "Lithium" "Lutetium" "Magnesium" "Manganese" "Meitnerium" "Mendelevium" "Mercury" "Molybdenum" "Neodymium" "Neon" "Neptunium" "Nickel" "Niobium" "Nitrogen" "Nobelium" "Osmium" "Oxygen" "Palladium" "Phosphorus" "Platinum" "Plutonium" "Polonium" "Potassium" "Praseodymium" "Promethium" "Protactinium" "Radium" "Radon" "Rhenium" "Rhodium" "Roentgenium" "Rubidium" "Ruthenium" "Rutherfordium" "Samarium" "Scandium" "Seaborgium" "Selenium" "Silicon" "Silver" "Sodium" "Strontium" "Sulfur" "Tantalum" "Technetium" "Tellurium" "Terbium" "Thallium" "Thorium" "Thulium" "Tin" "Titanium" "Tungsten" "Ununbium" "Ununhexium" "Ununoctium" "Ununpentium" "Ununquadium" "Ununseptium" "Ununtrium" "Uranium" "Vanadium" "Xenon" "Ytterbium" "Yttrium" "Zinc" "Zirconium")
for j in {0..118}
do
    echo "$j"
    python3 atom_generator.py $j > ${Atom_Name[$j]}.cpp
    

done