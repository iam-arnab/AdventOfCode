pub mod santa;
use crate::santa::santa::floor;
use std::fs;

fn main() {
    let file_contents =
        fs::read_to_string("input.txt").expect("Something went wrong reading the file");
    println!("{}", floor(String::from(&file_contents)));
}
