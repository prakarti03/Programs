d = {
    "Baja Taco": 4.00,
    "Burrito": 7.50,
    "Bowl": 8.50,
    "Nachos": 11.00,
    "Quesadilla": 8.50,
    "Super Burrito": 8.50,
    "Super Quesadilla": 9.50,
    "Taco": 3.00,
    "Tortilla Salad": 8.00
}
sum = 0
while True:
    try:
        item = input("Item: ").lower().title()
       
        if item in d:
            sum += float(d[item])
            sum_n = float(sum)
            print('$',end = '')
            print(f"{sum_n:.2f}")
            
    except EOFError:
        print()
    except  KeyError:
        pass
