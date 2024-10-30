#Numero de casos de prueba
t = int(input())
 
for i in range(t):
    #Con split separo los numeros 
    x1,x2,x3 = input().split()
 
    x1=int(x1)
    x2=int(x2)
    x3=int(x3)
 
 
    #print(type(x1))
    numbers=[x1,x2,x3]
    numbers.sort()
    #print(numbers)
    small=(abs(numbers[0]-numbers[1]))+(abs(numbers[1]-numbers[1]))+(abs(numbers[2]-numbers[1]))
    print(small)