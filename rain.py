from time import sleep 
from gpiozero import InputDevice 
no_rain =InputDevice(18)
while True:
    if not no_rain.is_Active:
        print("Raining")
    else:
        print("No rain ")
    sleep(1)