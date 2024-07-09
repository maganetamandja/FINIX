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

print("Atom_Name = (", end='')
for x in range(len(rows)-2) :
    print("\""+rows[x][0]+"\"", end='')
    print(" ", end='')

print(")", end='')