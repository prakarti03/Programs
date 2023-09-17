#ask user for their name
name = input("what's your name? ").strip().title()

#remove whitespace from str and capitalize user's name
#name= name.strip().title()

#split user's name into first name and last name
first, last= name.split(" ")

#say hello to the user
print("hello,", last)

print("hello,",name,sep="!!!",end='\n')
#print(name)

#another method to do the same thing 
print(f"hello, {first}")

#use of escape sequence \
print("hello, \"friend\"")

