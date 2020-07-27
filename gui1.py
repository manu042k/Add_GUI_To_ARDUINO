from tkinter import *

import serial

ard_data = serial.Serial('COM3',baudrate=9600,timeout=1)


def led_on():
    ard_data.write(b'1')


def led_off():
    ard_data.write(b'0')

window = Tk()
window.geometry("500x500")
window.title("GUI")

label1 = Label(window,text="WELCOME TO GUI",
               relief="solid",
               width=20,
               font={"arial",90,"bold"})
label1.pack()

b1 = Button(window,text="ON",width=20,font={"arial",3,"bold"},bg="brown",fg="white",command=led_on).place(x=150,y=100)
b2 = Button(window,text="OFF",width=20,font={"arial",3,"bold"},bg="brown",fg="white",command=led_off).place(x=150,y=200)


window.mainloop()