Algoritmo trianguloRectangulo
	Escribir "Ingrese la longitud del primer lado del triangulo rectangulo:"
	Leer lado1
	Escribir "Ingrese la longitud del segundo lado del triangulo rectangulo:"
	Leer lado2
	hipotenusa <- rc(lado1*lado1 + lado2*lado2)
	perimetro <- lado1 + lado2 + hipotenusa
	area <- 0.5 * lado1 * lado2
	
	Escribir "La hipotenusa del triangulo rectangulo es:", hipotenusa
	Escribir "El perimetro del triangulo rectangulo es:", perimetro
	Escribir "El area del triangulo rectangulo es:", area
FinAlgoritmo
