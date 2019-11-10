distancia: int
gasto: float; consumo: float

distancia = int(input("Distancia percorrida: "))

gasto = float(input("Combustivel gasto: "))

consumo = distancia/gasto

print(f"Consumo medio = {consumo:.3f}")
