codigo: int; qtd: int
pagar: float;

codigo = int(input("Codigo do produto comprado: "))
qtd = int(input("Quantidade comprada: "))

pagar = 0
if codigo == 1:
	pagar = qtd * 5.00
elif codigo == 2:
	pagar = qtd * 3.50
elif codigo == 3:
	pagar = qtd * 4.80
elif codigo == 4:
	pagar = qtd * 8.90
elif codigo == 5:
	pagar = qtd * 7.32

print(f"Valor a pagar: R$ {pagar:.2f}")