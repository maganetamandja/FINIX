import csv

filename = "elementdatavalues.csv"

fields = []
rows = []

with open(filename, 'r', encoding='utf-8-sig') as csvfile:
    csvreader = csv.reader(csvfile)

    # extracting field names through first row
    fields = next(csvreader)

    # extracting each data row one by one
    for row in csvreader:
        rows.append(row)

print("""
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

void create_hydrogen(){
    
    """)

print("atom "+rows[0][0]+" ;")

print(rows[0][0]+".atom_name = \""+rows[0][0]+"\" ;")

print("string_atomic proprety ;")



for x in range(len(fields)) :
    print("proprety.set_string_atomic(\""+fields[x]+"\", \""+rows[0][x]+"\");")
    print(rows[0][0]+".my_atom_str_v.push_back(proprety) ;")
    

print("}")






