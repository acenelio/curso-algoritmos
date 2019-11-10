x: int; soma: int

x = int(input("Digite um numero inteiro: "))

while x != 0:
	if x % 2 != 0:
		x = x + 1

	soma = 5 * x + 20
	print(f"SOMA = {soma}")

	x = int(input("Digite um numero inteiro: "))

