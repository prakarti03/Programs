def main():    
     answer = input("What time is it? ").strip()
     
     time = convert(answer)
     
     if time >= 7 and time <=8:
         print("breakfast time")
     elif time >= 12 and time <= 13:
         print("lunch time")
     elif time >= 18 and time <= 19:
         print("dinner time")

def convert(answer):
    hours, minutes = answer.split(':')
    minutes = float(minutes)/60
    return float(hours)+ minutes
    



if __name__ == "__main__":
    main()
