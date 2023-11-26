l = [
    "january",
    "february",
    "march",
    "april",
    "may",
    "june",
    "july",
    "august",
    "september",
    "october",
    "november",
    "december"
]
while True:
    date = input("Date:").lower().strip()
    try:
        month, day, year = date.split("/")
        if( 1 <= int(month) <= 12 and 1 <= int(day) <= 31 ):
            break
    except:
        try:
            old_mon, old_day, year = date.split(" ")
            if ',' in old_day:
                for i in range(len(l)):
                    if old_mon == l[i]:
                        month = i + 1
                day = old_day.replace(",",'')
                if( 1 <= int(month) <= 12 and 1 <= int(day) <= 31 ):
                    break
        except:
            pass

if "/" in date:
    print(f"{year}-{int(month):02}-{int(day):02}", end = '')
if ',' in date:
    print(f"{year}-{int(month):02}-{int(day):02}")
