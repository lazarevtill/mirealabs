import numpy as np
while True:
    x: int
    y: int
    x = y = 0
    print("Input N")
    x = int(input())
    y = x
    a = np.zeros(x)
    check: int
    if 1 < x < 6:
        mas = np.zeros((x, y))
        print("1 if yourself input 0 if auto")
        check = int(input())
        if check == 1:
            print("input letter " + str(x * y) + " times")
            for i in range(x):
                for j in range(y):
                    mas[i][j] = int(ord(input()))
        elif check== 1:
            for i in range(x):
                for j in range(y):
                    mas[i][j] = 65 + i + j
        else:
            print("Wrong input")
            break
        for i in range(x):
            for j in range(y):
                test = mas[i][j]
                if test == 65 or test == 69 or test == 73 or test == 79 or test == 85 or test == 89 or test == 97 or test == 101 or test == 105 or test == 111 or test == 117 or test == 121:
                    a[i] += 10
                else:
                    a[i] += 1
        a.sort()
        print(a)
        exit(0)
    else:
        print("Wrong input")
