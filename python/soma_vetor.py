n: int
soma: float; media: float

n = int(input("Quantos numeros voce vai digitar? "))

vetor: [float] = [0 for x in range(n)]

for i in range(n):
	vetor[i] = float(input("Digite um numero: "))

soma = 0
for i in range(n):
	soma = soma + vetor[i]

media = soma / n

print("\nVALORES = ", end="")

for i in range(n):
	print(f"{vetor[i]:.1f}  ", end="")

print(f"\nSOMA = {soma:.2f}")
print(f"MEDIA = {media:.2f}")