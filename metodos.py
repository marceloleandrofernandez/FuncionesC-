## Metodo Falsa Posicion + Newton Raphson (Ponele)
## | i | xl | xu | f_xl | f_xu | xr | f_xr | Ea |
## term1=raw_input("Ingrese Primer Termino")
## term2=raw_input("Ingrese Segundo Termino")
## term3=raw_input("Ingrese Tercer Termino")
## expresion="3x^2-2x-4"
##
##
##
def encuentra_xl(y):
    if (y > 0):
        return True
    else:
        return False
    
def esvacio(unParametro):
    if(unParametro)=="":
        return True
    else:
        return False
    
def Ea(xr,xr_ant):
    #Error Absoluto#
    return abs((xr-xr_ant)/xr)

def ecuacion(a,b,c,m,n,x):
    return a*((x)**m)+b*((x)**n)+c

def falsaPosi(a,b,c,m,n):
    para_imp=[]
    print "Metodo Falsa Posicion"
    iteracion=xl=xu=f_xl=f_xu=xr=f_xr=0.00
    for x in range(10):
        y = a*((x)**m)+b*((x)**n)+c
        print "x "+ str(x) +" y "+ str(y)
        if (encuentra_xl(y)):
            print "encontre xl "+ str(x-1) +" encontre xu "+ str(x)
            xl=x
            xu=x-1
            break
    print "Sale del bucle for con xl y xu halladas (allá) "
    f_xl=ecuacion(a,b,c,m,n,xl)
    f_xu=ecuacion(a,b,c,m,n,xu)
    print "f_xl"+str(f_xl)
    print "f_xu"+str(f_xu)
    
    
    


