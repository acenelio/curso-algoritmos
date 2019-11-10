largura: float; comprimento: float; valor: float; area: float; preco: float;

largura = float(input("Digite a largura do terreno: "))
comprimento = float(input("Digite o comprimento do terreno: "))
valor = float(input("Digite o valor do metro quadrado: "))

area = largura * comprimento

print(f"Area do terreno = {area:.2f}")

preco = area * valor

print(f"Preco do terreno = {preco:.2f}\n")
