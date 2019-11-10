n: int; maior: int;

n = int(input("Qual a ordem da matriz? "));

matriz: [[int]] = [[0 for x in range(n)] for x in range(n)]
maiorlinha: int = []

for i in range(n):
	for j in range(n):
		matriz[i][j] = int(input(f"Elemento [{i},{j}]: "))

for i in range(n):
	maior = matriz[i][0]
	for j in range(1, n):
		if maior < matriz[i][j]:
			maior = matriz[i][j]

	maiorlinha.append(maior)


print("MAIOR ELEMENTO DE CADA LINHA:")

for i in range(n):
	print(maiorlinha[i])