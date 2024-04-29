# sistemas-distribuidos-entrega-7

## calcular_pi.rs

- Propósito: Este código define un programa en Rust que utiliza la biblioteca rsmpi para realizar cálculos en paralelo utilizando MPI (Message Passing Interface).
- Funcionalidad: El programa inicializa el entorno MPI, obtiene el rango y el tamaño del comunicador, imprime información sobre el núcleo y finaliza el entorno MPI.
- Uso: El programa puede ser compilado y ejecutado dentro de un contenedor Docker para realizar cálculos en paralelo distribuidos en múltiples núcleos.

## Dockerfile_master

- Propósito: Este archivo proporciona instrucciones para construir una imagen Docker que incluya Rust, MPI y el código fuente necesario para el contenedor "master".
- Funcionalidad: El Dockerfile instala las dependencias de MPI y Rust, copia el código fuente en el contenedor, compila el programa y define el comando para ejecutarlo.
- Uso: Se utiliza junto con Docker para construir una imagen que se ejecutará como el nodo "master" en un entorno de computación distribuida.

## Dockerfile_nodo

- Propósito: Este archivo proporciona instrucciones para construir una imagen Docker similar a la del nodo "master", pero para los nodos adicionales.
- Funcionalidad: El Dockerfile instala las mismas dependencias de MPI y Rust, copia el mismo código fuente y compila el programa.
- Uso: Se utiliza junto con Docker para construir una imagen que se ejecutará como un nodo adicional en un entorno de computación distribuida.

## docker-compose.yml

- Propósito: Este archivo define dos servicios ("master" y "nodo") y una red para conectarlos en un entorno Docker.
- Funcionalidad: Utiliza los Dockerfiles para construir las imágenes Docker para "master" y "nodo", y define una red interna para permitir la comunicación entre ellos.
- Uso: Se utiliza junto con Docker Compose para orquestar la ejecución de los contenedores en un entorno de computación distribuida.
