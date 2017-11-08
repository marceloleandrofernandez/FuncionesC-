from Tkinter import *
import metodos

def falsa():
    a=int(vara.get())
    b=int(varb.get())
    c=int(varc.get())
    m=int(varm.get())
    n=int(varn.get())
    #a=int(a),b=int(b),c=int(c),m=int(m),n=int(n)
    metodos.falsaPosi(a,b,c,m,n)
vent= Tk()

labelej=Label(text="Ax^m+Bx^n+C")
labelej.grid(row=0, columnspan=20)

labela=Label(text="A = ")
labela.grid(row=1, column=0)

vara=StringVar(vent, value="3")
a = Entry(vent,width=3,textvariable=vara)
a.grid(row=1, column=1)

labelb=Label(text="B = ")
labelb.grid(row=1, column=2)

varb=StringVar(vent, value="-2")
b = Entry(vent,width=3,textvariable=varb)
b.grid(row=1, column=3)

labelc=Label(text="C = ")
labelc.grid(row=1, column=4)
varc=StringVar(vent, value="-4")
c = Entry(vent,width=3,textvariable=varc)
c.grid(row=1, column=5)

labelm=Label(text="m = ")
labelm.grid(row=1, column=6)
varm=StringVar(vent, value="2")
m = Entry(vent,width=3,textvariable=varm)
m.grid(row=1, column=7)

labeln=Label(text="n = ")
labeln.grid(row=1, column=8)
varn=StringVar(vent, value="1")
n = Entry(vent,width=3,textvariable=varn)
n.grid(row=1, column=9)

labele=Label(text="Error (Por defecto 0.01)")
labele.grid(row=2, column=0)
vare=StringVar(vent, value="0.01")
e = Entry(vent,width=4,textvariable=vare)
e.grid(row=2, column=1)

botonfals=Button(vent,command=falsa,text="Falsa Posicion")
botonfals.grid(row=3, columnspan=20)
vent.mainloop()

