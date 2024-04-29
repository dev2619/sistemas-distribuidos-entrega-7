extern crate rsmpi;

use rsmpi::*;

fn main() {
    let universe = mpi::initialize().unwrap();
    let world = universe.world();

    let rank = world.rank();
    let size = world.size();

    println!("Soy el core nro. {} de {}", rank, size);

    mpi::finalize();
}
