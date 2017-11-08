## Metodo Falsa Posicion + Newton Raphson (Ponele)
## | i | xl | xu | f_xl | f_xu | xr | f_xr | Ea |
## term1=raw_input("Ingrese Primer Termino")
## term2=raw_input("Ingrese Segundo Termino")
## term3=raw_input("Ingrese Tercer Termino")
## expresion="3x^2-2x-4"
##      BÚSQUEDAS POR INCREMENTOS Y DETERMINACIÓN
##              DE VALORES INICIALES
##  Además de verificar una respuesta individual, se debe determinar si se han localizado
##  todas las raíces posibles. Como se mencionó anteriormente, por lo general una gráfica
##  de la función ayudará a realizar dicha tarea. Otra opción es incorporar una búsqueda
##  incremental al inicio del programa. Esto consiste en empezar en un extremo del inter-
##  valo de interés y realizar evaluaciones de la función con pequeños incrementos a lo
##  largo del intervalo. Si la función cambia de signo, se supone que la raíz está dentro del
##  incremento. Los valores de x, al principio y al final del incremento, pueden servir como
##  valores iniciales para una de las técnicas descritas en este capítulo.

def encuentra_xl(a,b,c,m,n):
    
    for x in range(10):
        y = ecuacion(a,b,c,m,n,x)
        print "x "+ str(x) +" y "+ str(y)
        if (y>0):
            print "encontre xl "+ str(x-1) +" encontre xu "+ str(x)
            xl=x
            xu=x-1
            return x
def ecuacion(a,b,c,m,n,x):
    return (a*((x)**m)+b*((x)**n)+c)

def res_xr(xu,f_xu,xl,f_xl):
    #calcula xr
    xr=0.00
    xr=xu-float(( float((f_xu)*(xl-xu)) / float(f_xl - f_xu) ))#( ((f_xu)*(xl-xu)) / (f_xl - f_xu) )
    print xr
    return round(xr,4)
    
def Ea(xr,xr_ant):
    #Error Absoluto#
    return abs((xr-xr_ant)/xr)

def falsaPosi(a,b,c,m,n):
    print "Metodo Falsa Posicion"
    para_imp=[]
    iteracion=xl=xu=f_xl=f_xu=xr=f_xr=xr_ant=0.00
    
    xl=encuentra_xl(a,b,c,m,n)
    xu=xl-1
    f_xl=ecuacion(a,b,c,m,n,xl)
    f_xu=ecuacion(a,b,c,m,n,xu)
    xr=res_xr(xu,f_xu,xl,f_xl)
    f_xr=round(ecuacion(a,b,c,m,n,xr),4)
    
    para_imp.append([iteracion,xl,xu,f_xl,f_xu,xr,f_xr])

    print para_imp

