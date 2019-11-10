nota1: float; nota2: float; notafinal: float

nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))

notafinal = nota1 + nota2

print(f"NOTA FINAL = {notafinal:.1f}")

if notafinal < 60.0:
	print("REPROVADO")