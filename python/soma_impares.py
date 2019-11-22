x: int; y: int; soma: int; troca: int;

print("Digite dois numeros:")
x = int(input())
y = int(input())

if x > y:
	troca = x
	x = y
	y = troca

soma = 0;
for i in range(x+1, y):
	if i % 2 != 0:
		soma = soma + i

print(f"SOMA DOS IMPARES = {soma}")