"""#int is acting like a function
 #nesting of functions (int(input))

x=float(input("what's x?"))
y=float (input("what's y?"))

#z=round(x+y)
#print(f"{z:,}" )

z= x/y


print(f"{z:.3f }")"""
###how to create pur own functions
def main():
    x=int(input("what's x?"))
    print("x squared is", square(x))

def square(n):
    return n**2
    #return n*n
    #return pow(n,2)

main()


