def encuentra_xl(a,b,c,m,n):
    for x in range(10):
        y = ecuacion(a,b,c,m,n,x)
        print "x "+ str(x) +" y "+ str(y)
        if (y>0):
            #print "encontre xl "+ str(x-1) +" encontre xu "+ str(x)
            return x
        
def ecuacion(a,b,c,m,n,x):
    return (a*((x)**m)+b*((x)**n)+c)

def res_xr(xu,f_xu,xl,f_xl):
    #calcula xr
    xr=0.00
    xr=xu-float(( float((f_xu)*(xl-xu)) / float(f_xl - f_xu) ))
    #print xr
    return round(xr,4)
    
def Ea(xr,xr_ant):
    #Error Absoluto#
    return abs((float(xr)-float(xr_ant))/float(xr))

def falsaPosi(a,b,c,m,n,e):
    print "Metodo Falsa Posicion"

    #Declaraciones
    para_imp=[]
    xl=xu=f_xl=f_xu=xr=f_xr=xr_ant=0.00
    iteracion=0

    #prepara las variables para las iteraciones
    xu=encuentra_xl(a,b,c,m,n)
    xl=xu-1
    f_xl=ecuacion(a,b,c,m,n,xl)
    f_xu=ecuacion(a,b,c,m,n,xu)
    xr=res_xr(xu,f_xu,xl,f_xl)
    f_xr=round(ecuacion(a,b,c,m,n,xr),4)
    xr_ant=xl
    print Ea(xr,xr_ant)
    para_imp.append([iteracion,xl,xu,f_xl,f_xu,xr,f_xr,Ea(xr,xr_ant)])
    #itera hasta que el error sea el buscado
    
    while True:
        iteracion +=1
        xl=xr
        f_xl=ecuacion(a,b,c,m,n,xl)
        xr=res_xr(xu,f_xu,xl,f_xl)
        f_xr=ecuacion(a,b,c,m,n,xr)
        xr_ant=xl
        print Ea(xr,xr_ant)
        para_imp.append([iteracion,xl,xu,f_xl,f_xu,xr,f_xr,Ea(xr,xr_ant)])
        if (Ea(xr,xr_ant) < e):
            break

        
    print "{:^8}|{:^8}|{:^8}|{:^8}|{:^8}|{:^8}|{:^8}|{:^8}".format("i","xl","xu","f(xl)","f(xu)","xr","f(xr)","Ea")
    for item in para_imp:
                print "{:^8}|{:^8}|{:^8}|{:^8}|{:^8}|{:^8}|{:^8}|{:^8}".format(item[0],item[1],item[2],round(item[3],4),item[4],item[5],round(item[6],4),round(item[7],4))    
        


    
