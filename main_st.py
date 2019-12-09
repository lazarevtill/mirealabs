import random
import numpy as np

N = 0
while True:
    M = input("Введите размер матрицы в пределах от 2 до 5 включительно: ")
    if not M.isnumeric():
        print("Вы ввели не число или вещественное число. Попробуйте снова: ")
    elif not 2 <= int(M) <= 5:
        print("Ваше число не диапазоне. Попробуйте снова")
    else:
        break
M = int(M)
a = np.zeros(M)
# Создание массива из нулей для дальнейшего заполнения его
mas = np.zeros((M, M))
while True:
    check = input("Самостоятельное заполнение матрицы - 1, автоматическое - 0: ")
    if not check.isnumeric():
        print("Вы ввели не число или вещественное число. Попробуйте снова: ")
    elif not 0 <= int(check) <= 1:
        print("Требуется ввести 0 или 1. Попробуйте снова: ")
    else:
        break
if int(check) == 1:
    print("Введите латинскую букву в пределе от A(a) до Z(z) включительно " + str(M * M) + " раз(-а)")
    for i in range(M):
        for j in range(M):
            while True:
                tmp = input("Введите число: ")
                if not tmp.isalpha() and tmp.__len__() == 1:
                    print("Вы ввели не 1 букву. Попробуйте снова: ")
                elif not 65 <= ord(tmp) <= 122:
                    print("Введённая буква не в диапазоне. Попробуйте снова: ")
                else:
                    break
            mas[i][j] = ord(tmp)
else:
    for i in range(M):
        for j in range(M):
            mas[i][j] = 65 + random.randint(0, 57)
            # Автоматическое аполнение массива числами от 0 до 100
for i in range(M):
    for j in range(i + 1):
        test = mas[i][j]
        if test == 65 or test == 69 \
                or test == 73 or test == 79 \
                or test == 85 or test == 89 \
                or test == 97 or test == 101 \
                or test == 105 or test == 111 \
                or test == 117 or test == 121:
            # проверка на гласные/согласные по ASCII кодам букв
            a[i] += 10
        # добавляем 10 если гласная
        else:
            a[i] += 1
        # добавляем 1 если согласная
for i in range(M - 1):
    for j in range(M - 1):
        if a[j] > a[j + 1]:
            a[j], a[j + 1] = a[j + 1], a[j]
            # Пузырьковая сортировка элементов массива
print(a)
