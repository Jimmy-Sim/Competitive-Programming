while True:
    x, y = map(float, input().split())

    if x == 0 and y == 0:
        print("AXIS")
        break
    elif x == 0 or y == 0:
        print("AXIS")
    elif x > 0:
        if y > 0:
            print("Q1")
        else:
            print("Q4")
    elif x < 0:
        if y > 0:
            print("Q2")
        else:
            print("Q3")