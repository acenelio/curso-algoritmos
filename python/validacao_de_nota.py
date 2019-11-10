nota1: float; nota2: float; media: float

nota1 = float(input("Digite a primeira nota: "))

while nota1 < 0 or nota1 > 10:
	nota1 = float(input("Valor invalido! Tente novamente: "))

nota2 = float(input("Digite a segunda nota: "))

while nota2 < 0 or nota2 > 10:
	nota2 = float(input("Valor invalido! Tente novamente: "))

media = (nota1 + nota2) / 2

print(f"MEDIA = {media:.2f}")