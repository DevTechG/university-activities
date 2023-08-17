import cv2 as cv
import numpy as np

s = 4
thickness = 3

img = np.zeros((256*s,256*s,3), np.uint8)

cv.line(img, (0*s, 0*s), (128*s, 128*s), (0, 255, 0), 3, cv.LINE_AA)
cv.line(img, (128*s, 128*s), (128*s, 256*s), (0, 255, 0), 3)

cv.rectangle(img, (20*s, 20*s), (100*s, 100*s), (255, 0, 0), 3, cv.LINE_AA)
cv.rectangle(img, (30*s, 30*s), (110*s, 110*s), (255, 0, 0), 3, cv.LINE_AA)

cv.circle(img, (200*s, 80*s), 40*s, (0, 0, 255), -1, cv.LINE_AA)
cv.circle(img, (200*s, 200*s), 40*s, (0, 0, 255), 3, cv.LINE_AA)

resized_img = cv.resize(img, (256, 256))
#small = cv2.resize(image, (0,0), fx=0.25, fy=0.25) 

save_path = 'C:/Users/EST-01/Desktop/testAA-downsampling.png'
cv.imwrite(save_path, resized_img)




