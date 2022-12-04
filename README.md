# :sparkles: :santa: AdventOfCode2022 :christmas_tree: :candle: 

Solutions for [Advent Of Code 2022](http://adventofcode.com/2022) written in **C**

The descriptions of the daily tasks are in the comments in the `*.c` files (see `src/`).

The `*.txt` files in `input/` contain the original input for the tasks.

`main.exe` does all tasks and prints all solutions. It uses the input files in `input/`.

Use GCC to build `main.c` with the makefile provided.

![C/C++ CI](https://github.com/derpicknicker1/AdventOfCode2022/workflows/C/C++%20CI/badge.svg)
![GitHub release (latest by date)](https://img.shields.io/github/v/release/derpicknicker1/AdventOfCode2022)
![GitHub repo size](https://img.shields.io/github/repo-size/derpicknicker1/AdventOfCode2022)
#### Stats
![](https://img.shields.io/badge/day%20📅-4-blue)
![](https://img.shields.io/badge/stars%20⭐-6-yellow)
![](https://img.shields.io/badge/days%20completed-3-red)

<!--- advent_readme_stars table --->
## 2022 Results

| Day | Part 1 | Part 2 |
| :---: | :---: | :---: |
| [Day 1](https://adventofcode.com/2022/day/1) | ⭐ | ⭐ |
| [Day 2](https://adventofcode.com/2022/day/2) | ⭐ | ⭐ |
| [Day 3](https://adventofcode.com/2022/day/3) | ⭐ | ⭐ |
<!--- advent_readme_stars table --->

## Benchmarks
Done with [hyperfine](https://github.com/sharkdp/hyperfine) (see file `benchmark.bat`)
| Command | Mean [ms] | Min [ms] | Max [ms] | Relative |
|:---|---:|---:|---:|---:|
| `benchmark\adv1.exe` | 15.2 ± 3.7 | 9.4 | 30.6 | 1.00 |
| `benchmark\adv2.exe` | 18.7 ± 3.5 | 10.6 | 36.1 | 1.23 ± 0.38 |
## Building in SublimeText3 (Win)

* Install Mingw
* Add `C:\MinGW\bin` to PATH
* Symlink `mklink C:\MinGW\bin\make.exe C:\MinGW\bin\mingw32-make.exe`
* In SublimeText **Tools > Build System > New Build System...**
  * Add the following code (also found in _Make_AOC.sublime-build_)
    ```yaml
    {
      "shell_cmd": "make",
      "working_dir": "${folder}",
     
      "variants": 
      [
          {
              "name": "Run",
              "shell_cmd": "make && ${folder}/main.exe skip"
          },
          {
              "name": "Clean",
              "shell_cmd": "make clean"
          }
      ]
    }
    ```
  * Save to `C:\Users\[$user]\AppData\Roaming\Sublime Text 3\Packages\User`
* Select this Build System in **Tools > Build System**
* Build with <kbd>Ctrl</kbd> + <kbd>B</kbd>
  * <kbd>Ctrl</kbd> + <kbd>Shift</kbd> + <kbd>B</kbd> to choose variant (e.g _run_)

## Snippet
All solutions have the same base structure.

There is a snippet for SublimeText to generate this basic structure.

Just type `AOC` and hit <kbd>Tab</kbd> to insert the basic code.

To use it, place `AOC.sublime-snippet` in `C:\Users\<UserName>\AppData\Roaming\Sublime Text 3\Packages\User`

## GIT
Auto-generate a release with the workflow found in `.github/workflows/`
```
git tag -a v* -m "My_Msg"
git push --tags
```

## Main executeable
To solve puzzles, put the input data given by the calendar in a txt file for each day(e.g. `3.txt` for Day 3).

Place the txt files in an fodler called `input`. The folder must be under the same path as the main executeable.

The same can be done for the samples of each puzzle in a folder named `samples`.

run `main` to solve the puzzles with the data from `input` folder.

run `main sample` to solve the puzzles with the data from `samples` folder.
