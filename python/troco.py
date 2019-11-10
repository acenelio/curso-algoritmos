preco: float; dinheiro: float; troco: float
qtd: int

preco = float(input("Preco unitario do produto: "))
qtd = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))

troco = dinheiro - (preco * qtd)

print(f"TROCO = {troco:.2f}")
