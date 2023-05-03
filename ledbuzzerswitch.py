import RPi.GPIO as GPIO 
import time
GPIO.setmode(GPIO.BOARD)
GPIO.setup(22,GPIO.IN,pull_up_down=GPIO.PUD_UP)
GPIO.setup(18,GPIO.OUT)
GPIO.setup(16,GPIO.OUT)
try:
    while True:
        if GPIO.input(22)==False:
            GPIO.output(16,True)
            GPIO.output(18,True)
            print("Button pressed Led On ")
        else:
            GPIO.output(16,False)
            GPIO.output(18,False)

except:
    GPIO.cleanup()