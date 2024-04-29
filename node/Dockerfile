FROM ubuntu:latest

# Instalar dependencias necesarias
RUN apt-get update && apt-get install -y gcc mpich

# Copiar el programa para calcular PI
COPY pi_calculator.c /pi_calculator.c

# Compilar el programa para calcular PI
RUN mpicc -o pi_calculator /pi_calculator.c && \
    echo "Compilación exitosa" || \
    echo "Error durante la compilación"

# CMD para ejecutar un nodo MPI
CMD ["mpirun", "-np", "3", "/pi_calculator"]
