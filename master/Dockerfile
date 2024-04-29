FROM ubuntu:latest

# Instalar dependencias necesarias
RUN apt-get update && apt-get install -y gcc mpich

# Copiar el programa holamundo.c
COPY holamundo.c /holamundo.c

# Compilar el programa holamundo.c
RUN mpicc -o holamundo /holamundo.c

# Copiar el programa para calcular PI
COPY pi_calculator.c /pi_calculator.c

# Compilar el programa para calcular PI
RUN mpicc -o pi_calculator /pi_calculator.c

# CMD para ejecutar un servidor MPI
CMD ["mpirun", "-np", "3", "/holamundo"]
