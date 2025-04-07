[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
# tp1
## **Ejercicio 2** 
El archivo _**.gitignore**_ es conveniente incluirlo ya que se utiliza para especificar qué archivos o directorios deben ser ignorados por Git, que no se agregarán al repositorio ni se rastrearán. Es para evitar que archivos innecesarios o confidenciales sean incluidos. 

El archivo se debe crear desde el inicio del proyecto, antes de hacer el primer commit, asegurando que archivos que no se quieran rastrear nunca sean parte del repositorio.

#### **Cómo ignorar un archivo**
1. Crear el archivo .gitignore si aún no existe
2. Abrirlo y agregar la línea con el nombre del archivo que se desea ignorar, por ejemplo: _ignorado.txt_
3. Guardar los cambios y agregar el archivo .gitignore al staging con _git add .gittignore_
4. Hacer commit y push de los cambios al repositorio. 

## **Ejercicio 3g** 
Al mostrar las direcciones, el resultado es el mismo ya que ambas sentencias son equivalentes. 

* En el apartado 2, mostramos el valor almacenado en el puntero, que es la dirección de memoria de la variable a la que está referenciada.
* En el apartado 3, mostramos directamente la dirección de la variable usando el operador de dirección (&).

Esto se debe a que un puntero referencia la ubicación en memoria de una variable. Al mostrar el contenido del puntero (sin usar el operador *), lo que realmente estamos viendo es esa dirección de memoria. 
Por otro lado, cuando usamos &vble,  también estamos accediendo a la dirección de la variable. 

* En el punto 4 obtenemos la dirección de memoria en la cual se encuentra el puntero que referencia a la variable, una dirección distinta ya que este mismo es también una variable que ocupa su lugar en la memoria. 