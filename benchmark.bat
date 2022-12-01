@echo off
echo Building executeables...
if not exist "benchmark" mkdir benchmark
set start=15
set end=15
for /l %%x in (%start%, 1, %end%) do (   
	echo Building Day %%x
	(
    echo #include "advent.h"
    echo int main(int argc, char* argv[]^){
    echo get%%xa("input/%%x.txt"^);get%%xb("input/%%x.txt"^);return 0;} ) >benchmark/main.c
   gcc -o benchmark/adv%%x benchmark/main.c src/advent%%x.c src/helper.c -I src/
)

echo Starting benchmarks...
.\hyperfine\hyperfine.exe -w 3 --export-markdown benchmark/out.md -P num %start% %end% "benchmark\adv{num}.exe"

echo &echo,&echo,Results:
type benchmark\out.md