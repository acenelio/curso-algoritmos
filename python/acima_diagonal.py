n: int; somaAcima: int

n = int(input("Qual a ordem da matriz? "))

matriz: [[int]] = [[0 for x in range(n)] for x in range(n)]

for i in range(n):
	for j in range(n):
		matriz[i][j] = (int(input(f"Elemento [{i},{j}]: ")))


somaAcima = 0
for i in range(n):
	for j in range(n):
		if i < j:
			somaAcima = somaAcima + matriz[i][j]

print(f"SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = {somaAcima}")