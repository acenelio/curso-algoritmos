m: int; n: int

m = int(input("Quantas linhas vai ter cada matriz? "))
n = int(input("Quantas colunas vai ter cada matriz? "))

a: [[int]] = [[0 for x in range(n)] for x in range(m)]
b: [[int]] = [[0 for x in range(n)] for x in range(m)]
c: [[int]] = [[0 for x in range(n)] for x in range(m)]

print("Digite os valores da matriz A:")

for i in range(m):
	for j in range(n):
		a[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Digite os valores da matriz B:")

for i in range(m):
	for j in range(n):
		b[i][j] = int(input(f"Elemento [{i},{j}]: "))

for i in range(m):
	for j in range(n):
		c[i][j] = a[i][j] + b[i][j]

print("MATRIZ SOMA:")

for i in range(m):
	for j in range(n):
		print(f"{c[i][j]} ", end="")
	print()