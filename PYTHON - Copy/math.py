def main():
    exp = input('Expression: ').strip()
    x, y, z = exp.split(" ")


    if( y == '+'):
        add(x,z)
    elif( y == '-'):
        sub(x,z)
    elif( y == '*'):
        mul(x,z)
    elif( y == '/'):
        div(x,z)

    
def add(x,z):

    p = float(int(x)+int(z))
    print(f'{p:.1f}')
    
def sub(x,z):
    q = float(int(x)-int(z))
    print(f'{q:.1f}')

def mul(x,z):
     r = float(int(x)*int(z))
     print(f'{r:.1f}')

def div(x,z):
     s = float(int(x)/int(z))
     print(f'{s:.1f}')


main()    
