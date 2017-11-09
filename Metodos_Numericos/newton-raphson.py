##newton raphson

##f(x)=x^3-x-1=0
cad="x^3-x-1"
a=1
b=-1
c=-1
m=3
n=1
resultados=[]
error=0.01
rta=0.00
x=0
xe=0
xu=0


def Bolzano(a,b,c,m,n,xe,xu):
    ### f(xe) * f(xu) < 0#####
    if ((ecuacion(a,b,c,m,n,xe)*ecuacion(a,b,c,m,n,xu)) < 0):
        ## (f(xe) * f''(xe) > 0 ) || ( f(xu) * f''(xu) > 0 ) ####
        if((ecuacion(a,b,c,m,n,xe)*fsegun(xe)) > 0 or (ecuacion(a,b,c,m,n,xu)*fsegun(xu) > 0)):
            return True
    else:
        "No Cumple Los requisitos"
        return False
###Primer Paso
def converg(a,b,c,m,n,x):
    for i in range(10):
        if(ecuacion(a,b,c,m,n,i)>0):
            return i
            break
def xe(i):
    xe=ecuacion(a,b,c,m,n,i)
    return xe
def xu(i):
    xu=ecuacion(a,b,c,m,n,i-1)
    return xu
####################
##Funcion f(x)
def ecuacion(a,b,c,m,n,x):
    ecuacion=(a*(x**3))+(b*x)+c
    return ecuacion
###Funcion Prima f'(x)#####
def fprima(x):
    return (3*(x**2)-1)
#### Funcion Prima Lejana f''(x)
def fsegun(x):
    return 6*x
##############################
def Ea(xi,xia):
    return abs(round(float(((xi -(xia))/xi)),4))
            
xe=xe(converg(a,b,c,m,n,x))
xu=xu(converg(a,b,c,m,n,x))
#print xe,xu
#print Bolzano(a,b,c,m,n,xe,xu)
if(Bolzano):
        xi=converg(a,b,c,m,n,x)
#print xi

def opera(a,b,c,m,n,xi,resultados,error):
    print"{:^80}".format("Metodo de Newton-Raphson")
    print"                                           "
    i=0
    fxi=ecuacion(a,b,c,m,n,xi)
    fpxi=fprima(xi)
    fxi_fpxi=round(float(fxi)/float(fpxi),4)
    fxia=float(xi-(fxi_fpxi))
    #print fxi_fpxi
    #print ea
    resultados.append([i,xi,fxi,fpxi,fxi_fpxi,fxia,Ea(fxia,xi)])
    #Porque no esta esto dentro de aquello....
    while True:
        global rta
        i+=1
        xi=fxia
        fxi=round(float(ecuacion(a,b,c,m,n,xi)),4)
        fpxi=round(float(fprima(xi)),4)
        fxi_fpxi=round(float(fxi)/float(fpxi),4)
        fxia=round(float(xi-(fxi_fpxi)),4)
        #resultados.append([i,xi,fxi,fpxi,fxi_fpxi,fxia,Ea(fxia,xi)])
        if (Ea(fxia,xi)>error):
            resultados.append([i,xi,fxi,fpxi,fxi_fpxi,fxia,Ea(fxia,xi)])
            rta=fxia
            #print rta
            pass
        else:
            break
                    
    print "{:^3}|{:^7}|{:^7}|{:^7}|{:^12}|{:^18}|{:^15}|".format("i","xi","f(xi)","f'(xi)","f(xi)/f'(xi)","xi-(f(xi)/f'(xi))","(xi-(xi-1))/xi")
    #print "***************************************************************************"
    print "---------------------------------------------------------------------------"
    for i in resultados:
        print "{:^3}|{:^7}|{:^7}|{:^7}|{:^12}|{:^18}|{:^15}|".format(i[0],i[1],i[2],i[3],i[4],i[5],i[6])
    return resultados                  

    
opera(a,b,c,m,n,xi,resultados,error)
print "***************************************************************************"
print "La Raiz Aproximada es: ",rta
