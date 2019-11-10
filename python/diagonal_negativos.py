n: int; qtdnegativos: int

n = int(input("Qual a ordem da matriz? "))

matriz: [[int]] = [[0 for x in range(n)] for x in range(n)]

for i in range(n):
	for j in range(n):
		matriz[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("DIAGONAL PRINCIPAL:")

for i in range(n):
	print(f"{matriz[i][i]} ", end="")

qtdnegativos = 0
for i in range(n):
	for j in range(n):
		if matriz[i][j] < 0:
			qtdnegativos = qtdnegativos + 1

print(f"\nQUANTIDADE DE NEGATIVOS = {qtdnegativos}")