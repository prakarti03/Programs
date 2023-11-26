#input a string
stri = input("Input:")
print("Output:",end = "")
 
for st in stri:
    
    if st in ['a','e','i','o','u','A','E','I','O','U']:
        print("",end = "")
    else:
        print(st,end = '')
        

print()        
              

