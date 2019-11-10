n: int; nmenores: int
alturatotal: float; alturamedia: float; percentualMenores: float;

n = int(input("Quantas pessoas serao digitadas? "))

nomes: str = [];
idades: int = [];
alturas: float = [];

for i in range(n):
	print(f"Dados da {i+1}a pessoa:");
	nomes.append(str(input("Nome: ")))
	idades.append(int(input("Idade: ")))
	alturas.append(float(input("Altura: ")))

nmenores = 0;
alturatotal = 0;
for i in range(n):
	if idades[i] < 16:
		nmenores = nmenores + 1
		alturatotal = alturatotal + alturas[i]

alturamedia = alturatotal / nmenores
percentualMenores = (float(nmenores) / n) * 100.0

print(f"\nAltura media = {alturamedia:.2f}");
print(f"Pessoas com menos de 16 anos: {percentualMenores:.1f}%")

for i in range(n):
	if idades[i] < 16:
		print(nomes[i])