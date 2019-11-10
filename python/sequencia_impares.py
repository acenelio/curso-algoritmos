x: int

x = int(input("Digite o valor de X: "))

for i in range(1, x+1):
	if i % 2 != 0:
		print(i)
