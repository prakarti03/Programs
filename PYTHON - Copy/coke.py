#any variable to check
amount = 50

#loop statement to while amount due is > 0
while amount > 0:
    #print the amount due
    print("Amount Due: ",amount)

    #prompts the user to insert coin
    insert = int(input("Insert Coin: "))
    #check if coin is 25,10,5
    if insert in (25,10,5):
        #subtract frm amt
        amount = amount - insert
        
#calculate the change owed
change = abs(amount)

#print the result
print("Change Owed: ",change)
