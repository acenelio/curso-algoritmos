a: float; b: float; c: float
quadrado: float; triangulo: float; trapezio: float

a = float(input("Digite a medida A: "))
b = float(input("Digite a medida B: "))
c = float(input("Digite a medida C: "))

quadrado = a * a
triangulo = (a * b) / 2
trapezio = ((a + b) * c) / 2

print(f"AREA DO QUADRADO = {quadrado:.4f}")
print(f"AREA DO TRIANGULO = {triangulo:.4f}")
print(f"AREA DO TRAPEZIO = {trapezio:.4f}")