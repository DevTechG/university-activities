import cv2 as cv
import numpy as np

s = 20
thickness = 3

img = np.zeros((100*s,100*s,3), np.uint8)

cv.line(img, (8*s, 8*s), (20*s, 8*s), (0, 255, 0), thickness, cv.LINE_AA)

cv.rectangle(img, (8*s, 16*s), (40*s, 60*s), (255, 0, 0), thickness, cv.LINE_AA)
cv.rectangle(img, (12*s, 20*s), (44*s, 64*s), (255, 0, 0), thickness, cv.LINE_AA)

#cv.circle(img, (80*s, 32*s), 16*s, (0, 0, 255), -1*s, cv.LINE_AA)

cv.circle(img, (80*s, 32*s), 16*s, (0, 0, 255), thickness, cv.LINE_AA)

pts = np.array([[20,70],[25, 75], [50, 80], [35, 85], [30, 90]], np.int32)*s
pts = pts.reshape((-1,1,2,))
cv.polylines(img, [pts], True, (0, 255, 255),thickness, cv.LINE_AA) 

save_path = 'C:/Users/EST-01/Desktop/test-antialiased.png'
cv.imwrite(save_path, img)
