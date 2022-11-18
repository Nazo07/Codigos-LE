
diccionario = {} 

diccionario['Nombre']=input('ingrese su nombre y apellido:') 
diccionario['Altura']=float(input('ingrese su altura:')) 
diccionario['Mail']=input('ingrese su mail')
diccionario['Tiros2']=input('Ingrese sus tiros de 2 puntos')
diccionario['Tiros3']=input('Ingrese sus tiros de 3 puntos')
diccionario['Prom'] = (int (diccionario['Tiros2'])+ 1.5 * int (diccionario['Tiros3']) / int (diccionario['Tiros2'])+ int (diccionario['Tiros3']))
if diccionario['Altura'] < 1.80 :
    print ('No podes ingresar al equipo de basket debido a tu altura')
else : 
    print ('bienvenido al equipo de basket los horarios de entrenamiento seran enviados a su mail')
    
while '@' not in diccionario['Mail']:
    print('Ingrese de nuevo su mail')
    diccionario['Mail'] = input('')
        

print("Su PETC es de:"+ string(diccionario['Prom']))

for key in diccionario.key():
    print(diccionario[key])
    

