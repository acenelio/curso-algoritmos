hinicial: int; hfinal: int; resp: int

hinicial = int(input("Hora inicial: "))
hfinal = int(input("Hora final: "))

if hinicial < hfinal:
	resp = hfinal - hinicial
else:
	resp = 24 - (hinicial - hfinal)

print(f"O JOGO DUROU {resp} HORA(S)")