import RPi.GPIO as GPIO 
import time
GPIO.setmode(GPIO.BCM)
GPIO.setup(24,GPIO.OUT)
GPIO.setup(23,GPIO.IN)
GPIO.setwarnings(False)
try:
    while True:
        if GPIO.input(23):
            GPIO.outpu(24,True)
            time.sleep(0.5)
            GPIO.outpu(24,False)
            print("Motion Detected")
        time.sleep(0.1)
except:
    GPIO.cleanup()
