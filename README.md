# 4100901-Final_Exam
This parcial was made by Gabriela Romo Mendoza and David Santiago Perez. 

Implemente un **sistema de operaciones aritmeticas** según los requerimientos descritos a continuacion.

### Requerimientos del sistema:

#### No funcionales:
1. Tener un LED para indicar el estatus del sistema (LD2) y una libreria (LED).
2. Tener un teclado hexadecimal para ingresar un valor al sistema en dígitos.
3. Tener un puerto de depuración con el PC (USART2 @256000 baudios).
4. Tener un display OLED (SSD1306) para mostrar la informacion del sistema.

#### Funcionales:
5. El teclado hexadecimal debe recibir un valor de hasta 4 dígitos.
6. El puerto USART2 debe recibir un valor de hasta 6 dígitos.
7. Los ultimos digitos recibidos por USART2 y el keypad deben aparecer en pantalla.
8. cuando se presione el boton azul B1 del la nucleo, se deben sumar los valores y mostrarse en la pantalla y el PC.
9. Se debe presionar la tecla '#' para reiniciar el valor por USART2 o la tecla '*' para reiniciar el valor por el keypad.
10. El LED se debe encender si la respuesta es par, y se debe apagar si la respuesta es impar.

