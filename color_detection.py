import cv2
import numpy as np


cap = cv2.VideoCapture(0)

while True:
  
    ret, frame = cap.read()

   
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

   
    lower_red = np.array([161, 155, 84])
    upper_red = np.array([179, 255, 255])

  
    mask = cv2.inRange(hsv, lower_red, upper_red)
    result = cv2.bitwise_and(frame, frame, mask=mask)

 
    cv2.imshow("Original", frame)
    cv2.imshow("Red Color Detection", result)

   
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
