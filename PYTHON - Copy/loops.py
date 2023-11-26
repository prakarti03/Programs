students = [{"name":"hermione","house":"slytherin"},
           {"name":"harry","house":None}]  #None is a keyword in python that simply indicates nothing

for s in students:
    print(s["name"],s["house"],sep=", ")
