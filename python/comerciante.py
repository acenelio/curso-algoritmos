n: int; abaixo: int; entre: int; acima: int
vtotalcompra: float; vtotalvenda: float; lucrototal: float

n = int(input("Serao digitados dados de quantos produtos? "))

nomes: str = []
pcompra: float = []
pvenda: float = []
porcentagemlucros: float = []

for i in range(n):
	print(f"Produto {i + 1}:")
	nomes.append(str(input("Nome: ")))
	pcompra.append(float(input("Preco de compra: ")))
	pvenda.append(float(input("Preco de venda: ")))

for i in range(n):
	porcentagemlucros.append((pvenda[i] - pcompra[i]) / pcompra[i] * 100.0)

abaixo = 0
entre = 0
acima = 0

for i in range(n):
	if porcentagemlucros[i] < 10.0:
		abaixo = abaixo + 1
	elif porcentagemlucros[i] < 20.0:
		entre = entre + 1
	else:
		acima = acima + 1

vtotalcompra = 0
vtotalvenda = 0

for i in range(n):
	vtotalcompra = vtotalcompra + pcompra[i]
	vtotalvenda = vtotalvenda + pvenda[i]

lucrototal = vtotalvenda - vtotalcompra

print("\nRELATORIO:")
print(f"Lucro abaixo de 10%: {abaixo}")
print(f"Lucro entre 10% e 20%: {entre}")
print(f"Lucro acima de 20%: {acima}")
print(f"Valor total de compra: {vtotalcompra:.2f}")
print(f"Valor total de venda: {vtotalvenda:.2f}")
print(f"Lucro total: {lucrototal:.2f}")
