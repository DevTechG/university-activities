import cv2 as cv
import numpy as np

img = np.zeros((256,256,3), np.uint8)

cv.line(img, (0, 0), (128, 128), (0, 255, 0), 3)
cv.line(img, (128, 128), (128, 256), (0, 255, 0), 3)

cv.rectangle(img, (20, 20), (100, 100), (255, 0, 0), 2)
cv.rectangle(img, (20+10, 20+10), (100+10, 100+10), (255, 0, 0), 2)

cv.circle(img, (200, 80), 40, (0, 0, 2550), -1)
cv.circle(img, (200, 200), 40, (0, 0, 2550), 1)

save_path = 'C:/Users/EST-01/Desktop/test-256px.png'
cv.imwrite(save_path, img)
