Algoritmo sin_titulo
	Escribir "Ingrese la longitud del primer lado del rectangulo:"
	Leer lado1
	Escribir "Ingrese la longitud del segundo lado del rectangulo:"
	Leer lado2
	diagonal <- rc(lado1 * lado1 + lado2 * lado2)
	superficie <- lado1 * lado2
	perimetro <- 2 * (lado1 + lado2)
	Escribir "La diagonal del rectangulo es:", diagonal
	Escribir "La superficie del rectangulo es:", superficie
	Escribir "El perimetro del rectangulo es:", perimetro
FinAlgoritmo
