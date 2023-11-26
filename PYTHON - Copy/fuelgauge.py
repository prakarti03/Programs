def main():
    get_int("Fraction: ")
    #print(p)

    
def get_int(prompt):
    while True:
        
        try:
            t = input(prompt)
            x,y = t.split('/')
            new_x = int(x)
            new_y = int(y)

            perc = ( new_x/new_y) * 100

            if(new_x > new_y):
                pass
            elif perc <= 1 :
                print('E')
                break
            elif perc >= 99 and new_x < new_y :
                print('F')
                break
            else:
                print (round(perc),end="")
                print ('%')
                break
        
        except (ValueError,ZeroDivisionError):
            pass
    
main()    
