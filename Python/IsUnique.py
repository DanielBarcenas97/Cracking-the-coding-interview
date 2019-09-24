def isUnique(palabra):
    for i in range(len(palabra)):
        if i != len(palabra)-1:
            if palabra[i] == palabra[i+1]:
                return 1
        else:
            return 0




palabra = "perros"
res=isUnique(palabra)
if res == 1:
    print("Se repiten")
else:
    print("No se Repiten")


    
