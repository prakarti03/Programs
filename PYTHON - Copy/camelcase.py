def main():
    variable = input("camelCase: ")
    print("snake_case: ",end="")
    snake_case(variable)

def snake_case(var):
    
    for snake in var:
        
        if snake.isupper():
            
            print("_" + snake.lower(),end="")
        
        else:
            
            print(snake,end="")
    print()
    
main()
