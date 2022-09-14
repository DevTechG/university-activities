import numpy as np


def ln():
    print("\n")

arr = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])  #Array unidimensional
print("Acessando no índice específico:", arr[9])
print("Obtendo o tipo da minha variável:", type(arr))
print("Forma do meu array:", arr.shape)
print("Quantidade de elementos do meu array:", arr.size)
print("Dimensões:", arr.ndim)
ln()

arr_bi = np.array([[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]])  #Array bidimensional
print(arr_bi)
print("Acessando no índice específico:", arr_bi[0, 0])
print("Obtendo o tipo da minha variável:", type(arr_bi))
print("Forma do meu array:", arr_bi.shape)
print("Quantidade de elementos do meu array:", arr_bi.size)
print("Dimensões:", arr_bi.ndim)
print("Tipos de dados armazenados:",arr_bi.dtype)
ln()

#Slicing
linha = arr_bi[0, :]  #Obtendo todos os elementos de uma linha
print(linha)
coluna = arr_bi[:, 0]  #Obterndo todos os elementos de uma coluna
print(coluna)

n = arr_bi[0, 1:3]  #Obtendo os elementos de 1 a 2 da linha 0
print(n)
ln()

arr = np.array([1, 2, 3, 4, 5]) 
#x = arr.copy()
#x = arr #Essa linha é diferente da linha anterior
x = arr.view()
arr[0] = 42

print(arr)
print(x)
ln()

arr = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]) 
newarr = arr.reshape(4, 3)
print(arr)
newarr[0,0] = 42
print(arr)
print(newarr)
ln()
#newarr = newarr.reshape(12)
#print(newarr)

arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]) 
newarr = arr.reshape(2, 3, 2)
#newarr = arr.reshape(4,4) #Erro de tamanho
print(arr)
print(newarr)
ln()

arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]) 
#newarr = arr.reshape(2, -1)
#print(newarr)
#ln()
#newarr = arr.reshape(4, -1)
#print(newarr)
#ln()
#newarr = arr.reshape(-1, 4)
#print(newarr)
#ln()

arr = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9]) 
for x in arr:
    #print(x)
    print(x, end=" ")
ln()
arr = np.array([[1, 2, 3, 4], [5, 6, 7, 8]]) 
for x in arr:
    #print(x)
    print(x)
ln()
for x in arr:
    for y in x:
        print(y)
ln()

arr1 = np.array([1, 3, 5, 7]) 
arr2 = np.array([2, 4, 6, 8]) 
arr = np.concatenate((arr1, arr2))
print(arr)
ln()

arr1 = np.array([[1, 3], [5, 7]]) 
print("Array 1\n", arr1)
arr2 = np.array([[2, 4], [6, 8]]) 
print("Array 2\n", arr2)
#arr = np.concatenate((arr1, arr2), axis = 1)
#print("Array concatenado coluna\n", arr)
arr = np.concatenate((arr1, arr2), axis = 0)
print("Array concatenado linha\n", arr)
ln()

arr1 = np.array([10, 30, 50]) 
arr2 = np.array([20, 40, 60]) 
arr = np.stack((arr1,arr2), axis = 1)
#arr = np.stack((arr1,arr2), axis = 0)
print(arr)
ln()

arr = np.array([6, 7, 4, 3, 2, 1]) 
newarr = np.array_split(arr, 2)
print(newarr)
print(newarr[0])
print(newarr[1])
ln()

arr = np.array([[ 0, 1], [2, 3], [4, 5], [6, 7], [8, 9], [10,11]]) 
print(arr)
ln()
newarr = np.array_split(arr, 3)
print(newarr[0])
print(newarr[1])
print(newarr[2])

arr = np.array([6, 7, 4, 3, 4, 4]) 
x = np.where(arr == 4)
#x = np.where(arr == 3)
print(x)
print(arr[x])
ln()

arr = np.array([6, 7, 8,  9])
#x = np.searchsorted(arr, 7)
#x = np.searchsorted(arr, 10)
x = np.searchsorted(arr, 5)
print(x)
ln()

arr = np.array([1, 3, 5, 7, 2, 4, 6, 8]) 
#print(np.sort(arr))
x = np.sort(arr)
x[3] = 100
print(arr)
print(x)
arr = np.array(['banana', 'cherry', 'apple']) 
print(np.sort(arr))
arr = np.array([True, False, True]) 
print(np.sort(arr))
arr = np.array([[1, 5, 3], [6, 2, 4]]) 
print(np.sort(arr))
print(np.sort(arr, axis = None))
print(np.sort(arr, axis = 0))
print(np.sort(arr, axis = 1))
ln()

arr = np.array([41, 42, 43, 44])
x = [True, False, True, False]
newarr = arr[x]
print(newarr)
ln()

arr = np.array([41, 42, 43, 44])
filter_array = []
for element in arr:
    if element > 42:
        filter_array.append(True)
    else:
        filter_array.append(False)
newarr = arr[filter_array]
print(filter_array)
print(newarr)