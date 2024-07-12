import sys
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


def create_cpp(in_j):
    j = int(in_j)
    print("#include \""+rows[j][0]+".hpp\"")
    print("""
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
    """)
    print("atom "+rows[j][0]+" ;")
    print("void create_"+rows[j][0]+"(){")
        
        

    

    print(rows[j][0]+".atom_name = \""+rows[j][0]+"\" ;")

    print("string_atomic proprety ;")



    for x in range(len(fields)) :
        print("proprety.set_string_atomic(\""+fields[x]+"\", \""+rows[j][x]+"\");")
        print(rows[j][0]+".my_atom_str_v.push_back(proprety) ;")
        

    print("}")


if __name__ == "__main__":
    #j = sys.argv[1] 
    create_cpp(sys.argv[1])




