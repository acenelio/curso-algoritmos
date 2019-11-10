nome1: str ; nome2: str
idade1: int ; idade2: int
media: float

print("Dados da primeira pessoa:")
nome1 = str(input("Nome: "))
idade1 = int(input("Idade: "))

print("Dados da segunda pessoa:")
nome2 = str(input("Nome: "))
idade2 = int(input("Idade: "))

media = (idade1 + idade2) / 2.0

print(f"A idade media de {nome1} e {nome2} eh de {media:.1f} anos")