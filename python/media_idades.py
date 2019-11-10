idade: int; npessoas: int
soma: float; media: float

print("Digite as idades:")
idade = int(input())

if idade < 0:
	print("IMPOSSIVEL CALCULAR")
else:
	soma = 0
	npessoas = 0
	while idade >= 0:
		soma = soma + idade
		npessoas = npessoas + 1
		idade = int(input())

	media = soma / npessoas

	print(f"MEDIA = {media:.2f}")