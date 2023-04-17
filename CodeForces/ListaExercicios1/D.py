x = int(input())
lista = []
respostas = []
for i in range(x):
    nome = input()
    lista.append((nome, i))
    respostas.append(nome)
lista.sort()

for c in respostas:
    for i in range(x):
        if c in lista[i]:
            print(i)
#print(respostas)
#print(lista)