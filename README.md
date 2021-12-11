# Simple nCr (combination function, choose function) calculator

A simple C++ program for calculating nCrs quickly (it could probably be improved, but it's still quite fast!).

## Limits:
All numbers are unsigned 64-bit integers. I haven't accounted for numbers outside of uint64 limits (over 18446744073709551615).

## Usage:
Linux:
> `g++ -O3 nCr.cpp -o nCr.out && ./nCr.out`

Windows (requires MinGW):
> `g++ -O3 nCr.cpp -o nCr.exe`
> 
> `nCr.exe`
