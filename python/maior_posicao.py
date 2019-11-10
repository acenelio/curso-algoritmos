n: int; posmaior: int
maior: float

n = int(input("Quantos numeros voce vai digitar? "))

vetor: float = []

for i in range(n):
	vetor.append(float(input("Digite um numero: ")))

maior = vetor[0]
posmaior = 0

for i in range(n):
	if vetor[i] > maior:
		maior = vetor[i]
		posmaior = i

print(f"\nMAIOR VALOR = {maior:.1f}")
print(f"POSICAO DO MAIOR VALOR = {posmaior}")