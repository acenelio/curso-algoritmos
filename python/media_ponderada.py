n: int
valor: float; valor1: float; valor2: float; media: float

n = int(input("Quantos casos voce vai digitar? "))

for i in range(n):
	print("Digite tres numeros:")
	valor = float(input())
	valor1 = float(input())
	valor2 = float(input())

	media = (valor * 2.0 + valor1 * 3.0 + valor2 * 5.0) / 10.0

	print(f"MEDIA = {media:.1f}")