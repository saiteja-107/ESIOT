import RPi.GPIO as GPIO
import time 
GPIO.setmode(GPIO.BCM)
GPIO.setup(23,GPIO.IN,pull_up_down=GPIO.PUD_UP)
GPIO.setup(24,GPIO.OUT)
try:
    while True:
        if GPIO.input(23)==False:
            GPIO.output(24,True)
            print("Button Pressed ")
            time.sleep(0.2)
        else:
            GPIO.output(24,False)


except:
    GPIO.cleanup()
