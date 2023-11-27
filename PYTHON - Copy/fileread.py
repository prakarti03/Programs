##        READING FROM A FILE METHOD-1
with open("names.txt","r") as file:
    lines = file.readlines()

for line in sorted(lines):
    print("hello,",line.rstrip())    
    
##       METHOD - 2
with open("names.txt","r") as file:
    for line in sorted(file, reverse = True): ##SORTING IN REVERSE ORDER       #SORTED FILE 
        print("hello,",line.rstrip())       