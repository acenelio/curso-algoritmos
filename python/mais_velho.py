n: int; maioridade: int; posicaomaior: int

n = int(input("Quantas pessoas voce vai digitar? "))

nomes: str = []
idades: int = []

for i in range(n):
	print(f"Dados da {i+1}a pessoa:")
	nomes.append(str(input("Nome: ")))
	idades.append(int(input("Idade: ")))

maioridade = idades[0]
posicaomaior = 0

for i in range(n):
	if idades[i] > maioridade:
		maioridade = idades[i]
		posicaomaior = i

print(f"PESSOA MAIS VELHA: {nomes[posicaomaior]}")