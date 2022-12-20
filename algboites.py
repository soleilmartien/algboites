import numpy
import random
import sys



nbboites = int(input("Insère nombre de boîtes:"))
nbtest = int(input("Insère nombre de tests désirés:"))
print("Un instant...")
ncycss = [] 
for x in range(nbtest):
    index = []
    for x in range(nbboites):
        index.append(x)
    random.shuffle(index)
    boitesreste = []
    for x in range(nbboites):
        boitesreste.append(index[x])
        
    compteur = nbboites
    prem = 0
    start = 0
    lencyc = 0
    lencycs = []

    while compteur > 0:
            for x in range(len(boitesreste)):   
                if boitesreste[x] == prem:
                    boitesreste.pop(x)
                    break
            x = index[prem]
            prem = x
            compteur += -1
            lencyc += 1
            if start == prem:
                lencycs.append(lencyc)
                lencyc = 0
                if len(boitesreste) == 0:
                    break
                start = boitesreste[0]
                prem = start
    ncycs = len(lencycs)    
    ncycss.append(ncycs)
    print(lencycs)
    print("\n")
s = 0
for x in range(nbtest):
    s = s + ncycss[x]
print("Taille moyenne des cycles:", s/nbtest)




