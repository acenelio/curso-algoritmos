nome: str
valor: float; pagamento: float
horas: int

nome = str(input("Nome: "))
valor = float(input("Valor por hora: "))
horas = int(input("Horas trabalhadas: "))

pagamento = valor * horas

print(f"O pagamento para {nome} deve ser {pagamento:.2f}")