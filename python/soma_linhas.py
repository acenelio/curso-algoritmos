m: int; n: int
somalinha: float

m = int(input("Qual a quantidade de linhas da matriz? "))
n = int(input("Qual a quantidade de colunas da matriz? "))

matriz: [[float]] = [[0 for x in range(n)] for x in range(m)]
vetor: [float] = [0 for x in range(m)]

for i in range(m):
	print(f"Digite os elementos da {i + 1} a. linha")
	for j in range(n):
		matriz[i][j] = float(input())

for i in range(m):
	somalinha = 0

	for j in range(n):
		somalinha = somalinha + matriz[i][j]
	vetor[i] = somalinha

print("VETOR GERADO:")

for i in range(m):
	print(f"{vetor[i]:.1f}")