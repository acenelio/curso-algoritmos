import math

a: float; b: float; c: float
delta: float; x1: float; x2: float

a = float(input("Coeficiente a: "))
b = float(input("Coeficiente b: "))
c = float(input("Coeficiente c: "))

delta = (b * b) - (4 * a * c)

if delta < 0:
	print("Esta equacao nao possui raizes reais")
else:
	x1 = ((-b) + math.sqrt(delta)) / (2 * a)
	x2 = ((-b) - math.sqrt(delta)) / (2 * a)

	print(f"X1 = {x1:.4f}")
	print(f"X2 = {x2:.4f}")