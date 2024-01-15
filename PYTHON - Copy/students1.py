import csv

name = input("Whats name? ") 
home = input("Whats home? ") 

with open("students.csv", "a") as file:
    writer = csv.DictWriter(file,fieldnames = ["name","home"])
    writer.writerow({"home": home, "name": name})
