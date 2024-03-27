El archivo .gitignore, es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto.

Un archivo local .gitignore generalmente se coloca en el directorio raíz de un proyecto. También puedes crear un archivo global .gitignore, y cualquier entrada en ese archivo se ignorará en todos tus repositorios de Git.

Para crear un archivo .gitignore local, crea un archivo de texto y asígnale el nombre ".gitignore" (recuerda incluir el . al principio). Luego, edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.

  Las entradas de este archivo también pueden seguir un patrón coincidente:

"*" se utiliza como una coincidencia comodín.
"/" se usa para ignorar las rutas relativas al archivo .gitignore.
"#" es usado para agregar comentarios
Este es un ejemplo de cómo puede lucir el archivo .gitignore :

"#" Ignora archivos del sistema Mac // Pongo el "#" entre comillas porque sino me lo toma como si fuese un comentario, pero no lleva comillas
.DS_store

"#" Ignora la carpeta node_modules
node_modules

"#" Ignora todos los archivos de texto
*.txt

"#" Ignora los archivos relacionados a API keys
.env

"#" Ignora archivos de configuración SASS
.sass-cache
Para agregar o cambiar tu .gitignore global, ejecuta el siguiente comando en la terminal:

git config --global core.excludesfile ~/.gitignore_global
Esto creará el archivo ~/.gitignore_global. Ahora puedes editar ese archivo de la misma manera que un archivo .gitignore local. Todos tus repositorios Git ignorarán los archivos y carpetas listadas en el .gitignore global.


/////////////////////////////Respuestas al punto 3//////////////////////////////////////////////

(g): Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?

En el apartado 2 y 3, me pide mostrar la direccion de memoria tanto de lo que apunta el puntero como de la variable, entonces explicar esto, es tan facil decir que cuando creamos una variable, se reserva cierta memoria para almacenar ese dato. Y cuando creamos un puntero(el cual tambien tiene una direccion de memoria), este contiene o apunta hacia otra direccion de memoria; es decir, que el puntero apunta a la variable creada. Y es por eso, que son iguales.

En el punto 4, como mencione en la respuesta anterior, se obtiene la direccion de memoria del puntero, que es distinta a la direccion de la variable o de la direccion a la cual apunta el mismo.
Un dato importante recalcar, es que en las computadoras de 65bit, por lo general se designan 8 bits para los punteros.

