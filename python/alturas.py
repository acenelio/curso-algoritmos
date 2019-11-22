n: int; nmenores: int
alturatotal: float; alturamedia: float; percentualMenores: float;

n = int(input("Quantas pessoas serao digitadas? "))

nomes: [str] = [0 for x in range(n)]
idades: [int] = [0 for x in range(n)]
alturas: [float] = [0 for x in range(n)]

for i in range(n):
	print(f"Dados da {i+1}a pessoa:")
	nomes[i] = str(input("Nome: "))
	idades[i] = int(input("Idade: "))
	alturas[i] = float(input("Altura: "))

nmenores = 0
alturatotal = 0
for i in range(n):
	if idades[i] < 16:
		nmenores = nmenores + 1
		alturatotal = alturatotal + alturas[i]

alturamedia = alturatotal / nmenores
percentualMenores = (float(nmenores) / n) * 100.0

print(f"\nAltura media = {alturamedia:.2f}")
print(f"Pessoas com menos de 16 anos: {percentualMenores:.1f}%")

for i in range(n):
	if idades[i] < 16:
		print(nomes[i])