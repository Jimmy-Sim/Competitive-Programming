limit, speed = int(input()), int(input())
diff = speed - limit

if diff < 1:
    print("Congratulations, you are within the speed limit!")
elif diff < 21:
    print("You are speeding and your fine is $100.")
elif diff < 31:
    print("You are speeding and your fine is $270.")
else:
    print("You are speeding and your fine is $500.")