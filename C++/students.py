with open("students.csv") as file:
    for line in sorted(file):
        row,column = line.rstrip().rsplit(",")
        print(f"{row} lives in {column}")