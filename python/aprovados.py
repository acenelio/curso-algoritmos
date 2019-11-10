n: int
media: float

n = int(input("Quantos alunos serao digitados? "))

nomes: str = []
notas1: float = []
notas2: float = []

for i in range(n):
	print(f"Digite nome, primeira e segunda nota do {i + 1}o aluno:")
	nomes.append(str(input()))
	notas1.append(float(input()))
	notas2.append(float(input()))

print("Alunos aprovados:")

for i in range(n):
	media = (notas1[i] + notas2[i]) / 2

	if media >= 6.0:
		print(nomes[i])