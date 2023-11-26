name = (input("whats x? "))

match name:
    case "harry" | "hermione" | "ron":
        print("gryffin")
    case "draco":
        print("slytherin")
    case _:
        print("who? ")
                 
