####        in this we havE CREATED A FILE, appended the names in a file 

name = input("Whats your name? ")
##          here we are opening a file 
#file = open("names.txt","a") syntax of open 
#file.write(f"{name}\n")       writing into the file
#file.close()

##       another method to open and close file will be already specified in this method 
with open("names.txt","a") as file:
   file.write(f"{name}\n")




