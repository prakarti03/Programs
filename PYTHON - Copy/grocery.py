#create an empty dict
d = {}
#loop forever

while True:
    try:
        # get user input
        item = input().lower()
        # check if item is already in the dict
        if item in d:
            d[item] += 1
        else:
            d[item] = 1
    except (EOFError, KeyError ):
        for key in sorted(d.keys()):
            print(d[key], key.upper())
        break
