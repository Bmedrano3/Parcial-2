Algoritmo DiaDeLaSemana
    Definir dia Como Entero
	
    Repetir
        Escribir "Ingrese un numero del 1 al 7 para el dia de la semana: "
        Leer dia
        
        Segun dia Hacer
            1:
                Escribir "El dia es Lunes."
            2:
                Escribir "El dia es Martes."
            3:
                Escribir "El dia es Miercoles."
            4:
                Escribir "El dia es Jueves."
            5:
                Escribir "El dia es Viernes."
            6:
                Escribir "El dia es Sabado."
            7:
                Escribir "El dia es Domingo."
            De Otro Modo:
                Escribir "Numero invalido, por favor, ingrese un numero del 1 al 7."
        Fin Segun
    Hasta Que dia >= 1 Y dia <= 7
	
FinAlgoritmo