import math
a = int(input())
b = int(input())
c = int(input())
d = b ** 2 - 4 * a * c
print((-b + math.sqrt(d)) / (2 * a))
print((-b - math.sqrt(d)) / (2 * a))