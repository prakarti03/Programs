# the greeting starts with “hello”, output $0
#Ignore any leading whitespace in the user’s greeting, and treat the user’s greeting case-insensitively.
greet=input("Greeting: ").strip().lower()
if(greet.startswith('hello')):
    print("$0")



# greeting starts with an “h” (but not “hello”), output $20
#Ignore any leading whitespace in the user’s greeting, and treat the user’s greeting case-insensitively.
elif(greet.startswith('h')!=greet.startswith('hello')):
    print("$20")


#Otherwise, output $100
#Ignore any leading whitespace in the user’s greeting, and treat the user’s greeting case-insensitively.
else:
    print("$100")
