El archivo .gitignore, es conveniente utilizarlo cuando existen algunos archivos que no quiero subir a mi repositorio, ya sea porque son despreciables o porque es un tipo de material privado. En simples palabras, e
l archivo .gitignore, es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto.
Un archivo local .gitignore generalmente se coloca en el directorio raíz de un proyecto. También puedes crear un archivo global .gitignore, y cualquier entrada en ese archivo se ignorará en todos tus repositorios de Git.
Las entradas de este archivo también pueden seguir un patrón coincidente:

* se utiliza como una coincidencia comodín.
/ se usa para ignorar las rutas relativas al archivo .gitignore.
# es usado para agregar comentarios

Para agregar o cambiar tu .gitignore global, ejecuta el siguiente comando en la terminal:

git config --global core.excludesfile ~/.gitignore_global

Esto creará el archivo ~/.gitignore_global. Ahora puedes editar ese archivo de la misma manera que un archivo .gitignore local. Todos tus repositorios Git ignorarán los archivos y carpetas listadas en el .gitignore global.