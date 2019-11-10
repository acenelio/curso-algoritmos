n: int

n = int(input("Quantos valores vai ter cada vetor? "))

a: int = []
b: int = []
c: int = []

print("Digite os valores do vetor A:")

for i in range(n):
	a.append(int(input()))

print("Digite os valores do vetor B:")

for i in range(n):
	b.append(int(input()))

for i in range(n):
	c.append(a[i] + b[i])

print("VETOR RESULTANTE:")

for i in range(n):
	print(c[i])