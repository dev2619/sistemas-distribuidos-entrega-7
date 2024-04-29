#include <stdio.h>
#include <math.h>
#include "mpi.h"

int main(int argc, char *argv[]) {
    int rank, size;
    long long int num_steps = 9000000000LL;
    double step, x, pi, sum = 0.0;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    step = 1.0 / (double)num_steps;

    for (long long int i = rank + 1; i <= num_steps; i += size) {
        x = (i - 0.5) * step;
        sum += 4.0 / (1.0 + x * x);
    }

    MPI_Reduce(&sum, &pi, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        pi *= step;
        printf("Valor estimado de PI: %.15f\n", pi);
    }

    MPI_Finalize();

    return 0;
}
