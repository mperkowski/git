# -*- coding: utf-8 -*-

print "Reprezentacja Grafów"
print
V = input ("Podaj liczbę wierzchołków: ")
E = input ("Podaj liczbę krawędzi: ")

lista = []
for x in range(1, E + 1):
    print "Podaj %s krawędź:" %str(x)
    i = input ("")
    j = input ("")
    lista.append(i)
    lista.append(j)

stopnie = []
for x in range(1, V+1):
    y = lista.count(x)
    print "Stopień wierzchołka "+str(x)+": "+ str(y)
    stopnie.append(y)

m = lista[0]
for x in stopnie:
    if x > m:
        m = x
        print "Stopień grafu wynosi: %s" %str(m) 


parzystosc = []
for x in stopnie:
    if x%2==0:
        parzystosc.append(x)
if  V <=E and len(parzystosc) == V and lista[0] == lista[-1] :
    print "Graf Eulera"   
else:
    print "Graf nie jest Eulerowski"

