num1: int; num2: int

print("Digite dois numeros inteiros:")
num1 = int(input())
num2 = int(input())

if num1 % num2 == 0 or num2 % num1 == 0:
	print("Sao multiplos")
else:
	print("Nao sao multiplos")