def main():
    
    #print_column(3)
     #print_row(4)
    print_square(3)
    

#def print_column(n):

    #for _ in range(n):
     #   print("#")
      
def print_row(coin):
    print("#" * coin)  #using string multiplication
 
def print_square(n):
    
    #for each row in square
    for i in range(n):
        print_row(n)    # ANOTHER METHOD calling a row fn 
        
        #for each brick in row
        for j in range(n):

            #print brick
            print('#',end="")
            
        print()

        
main()
