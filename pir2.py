from gpiozero import MotionSensor
#connect to pin 7 data 
import gpiozero
pir =MotionSensor(4)
while True:
    pir.wait_for_motion()
    print("Moved")
    pir.wait_for_no_motion()