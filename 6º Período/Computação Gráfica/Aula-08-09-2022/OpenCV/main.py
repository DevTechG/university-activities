import cv2 as cv
from google.colab.patches import cv2_imshow 

img = cv.imread("/content/Lena.bmp")
cv2_imshow(img)

#Imprimindo algumas informações
print("Dimensões", img.ndim)
print("Shape", img.shape)
print("Quantidade de elementos", img.size)
print("Tipo de dados armazenados na matriz", img.dtype)
print("Tipo da matriz:", type(img))

#Acessando os valores de intensidade do pixel na linha 100, coluna 100 da matriz
blue = img[100, 100, 0]
green = img[100, 100, 1]
red = img[100, 100, 2]

print("Red:", red)
print("Green:", green)
print("Blue:", blue)

pixel = img[100,100]
print("Pixel:", pixel)