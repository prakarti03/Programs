import csv

students = []

with open("students.csv") as file:
    #       METHOD 1
    #for line in sorted(file):
        #name,house = line.rstrip().rsplit(",")
        #student = {"name":name, "house":house}
        #students.append(student)
    #      METHOD 2
    reader = csv.DictReader(file)
    for row in reader:
        students.append({"name": row["name"], "home": row["home"]})

# def get_name(student):
    #return student['name'] 
       
for student in sorted(students,key =lambda student: student['home'] ):
    print(f"{student['name']} is from {student['home']}")
