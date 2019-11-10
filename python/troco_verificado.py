preco: float; dinheiro: float; troco: float; faltam: float
qtd: int

preco = float(input("Preco unitario do produto: "))
qtd = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))

if preco * qtd > dinheiro:
	faltam = preco * qtd - dinheiro
	print(f"DINHEIRO INSUFICIENTE. FALTAM {faltam:.2f} REAIS")
else:
	troco = dinheiro - preco * qtd
	print(f"TROCO = {troco:.2f}")
