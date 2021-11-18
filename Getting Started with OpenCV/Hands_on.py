import cv2
import matplotlib.pyplot as plt
import numpy as np

from google.colab.patches import cv2_imshow
a=cv2.imread("/content/sample_data/yellow.jpg")
a=cv2.rectangle(a,(55,55),(100,100),(0,255,0),2)
a=cv2.circle(a,(100,100),50,(255,0,0),2)
a=cv2.line(a, (50,50), (200,50), (0,0,255), 2)
a= cv2.putText(a, 'Welcome to TEC', (25,25), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,0,255), 2)
cv2_imshow(a)
b=cv2.cvtColor(a, cv2.COLOR_BGR2GRAY )
cv2_imshow(b)
