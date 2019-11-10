n: int; ratos: int; sapos: int; coelhos: int; qtdcobaias: int; total: int
tipo: str
pratos: float; psapos: float; pcoelhos: float

n = int(input("Quantos casos de teste serao digitados? "))

ratos = 0
sapos = 0
coelhos = 0

for i in range(n):
	qtdcobaias = int(input("Quantidade de cobaias: "))
	tipo = str(input("Tipo de cobaia: "))

	if tipo == 'R':
		ratos = ratos + qtdcobaias
	elif tipo == 'S':
		sapos = sapos + qtdcobaias
	else:
		coelhos = coelhos + qtdcobaias

total = ratos + sapos + coelhos
pcoelhos = (float(coelhos) / total) * 100.0
pratos = (float(ratos) / total) * 100.0
psapos = (float(sapos) / total) * 100.0

print("\nRELATORIO FINAL:")
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de ratos: {ratos}")
print(f"Total de sapos: {sapos}")
print(f"Percentual de coelhos: {pcoelhos:.2f}")
print(f"Percentual de ratos: {ratos:.2f}")
print(f"Percentual de sapos: {psapos:.2f}")