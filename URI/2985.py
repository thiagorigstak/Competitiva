def main():
    x = int(input())
    if x == 1:
        print(1)
    listat = []
    maxaulas = 1
    for i in range(x):
        ini,fim = map(int, input().split())
        tupla = (ini, fim + ini) # tupla = (Começo da aula, Duraçao da aula)
        listat.append(tupla)
    listat.sort(key=lambda x:x[1]) #ordena a lista de maneira crescente
    #print(listat)
    first_end = listat[0][1]
    for i in range(1,x):
        start,end = listat[i][0], listat[i][1]
        if start >= first_end:
            first_end = end
            maxaulas += 1
    print(maxaulas)
main()