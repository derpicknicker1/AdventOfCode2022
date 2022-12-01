# :sparkles: :santa: AdventOfCode2021 :christmas_tree: :candle: 

Solutions for [Advent Of Code 2021](http://adventofcode.com/2021) written in **C**

The descriptions of the daily tasks are in the comments in the `*.c` files (see `src/`).

The `*.txt` files in `input/` contain the original input for the tasks.

`main.exe` does all tasks and prints all solutions. It uses the input files in `input/`.

Use GCC to build `main.c` with the makefile provided.

![C/C++ CI](https://github.com/derpicknicker1/AdventOfCode2021/workflows/C/C++%20CI/badge.svg)
![GitHub release (latest by date)](https://img.shields.io/github/v/release/derpicknicker1/AdventOfCode2021)
![GitHub repo size](https://img.shields.io/github/repo-size/derpicknicker1/AdventOfCode2021)
#### Stats
![](https://img.shields.io/badge/day%20📅-24-blue)
![](https://img.shields.io/badge/stars%20⭐-43-yellow)
![](https://img.shields.io/badge/days%20completed-21-red)

<!--- advent_readme_stars table --->
## 2021 Results

| Day | Part 1 | Part 2 |
| :---: | :---: | :---: |
| [Day 1](https://adventofcode.com/2021/day/1) | ⭐ | ⭐ |
| [Day 2](https://adventofcode.com/2021/day/2) | ⭐ | ⭐ |
| [Day 3](https://adventofcode.com/2021/day/3) | ⭐ | ⭐ |
| [Day 4](https://adventofcode.com/2021/day/4) | ⭐ | ⭐ |
| [Day 5](https://adventofcode.com/2021/day/5) | ⭐ | ⭐ |
| [Day 6](https://adventofcode.com/2021/day/6) | ⭐ | ⭐ |
| [Day 7](https://adventofcode.com/2021/day/7) | ⭐ | ⭐ |
| [Day 8](https://adventofcode.com/2021/day/8) | ⭐ | ⭐ |
| [Day 9](https://adventofcode.com/2021/day/9) | ⭐ | ⭐ |
| [Day 10](https://adventofcode.com/2021/day/10) | ⭐ | ⭐ |
| [Day 11](https://adventofcode.com/2021/day/11) | ⭐ | ⭐ |
| [Day 12](https://adventofcode.com/2021/day/12) | ⭐ | ⭐ |
| [Day 13](https://adventofcode.com/2021/day/13) | ⭐ | ⭐ |
| [Day 14](https://adventofcode.com/2021/day/14) | ⭐ | ⭐ |
| [Day 15](https://adventofcode.com/2021/day/15) | ⭐ | ⭐ |
| [Day 16](https://adventofcode.com/2021/day/16) | ⭐ | ⭐ |
| [Day 17](https://adventofcode.com/2021/day/17) | ⭐ | ⭐ |
| [Day 20](https://adventofcode.com/2021/day/20) | ⭐ | ⭐ |
| [Day 21](https://adventofcode.com/2021/day/21) | ⭐ | ⭐ |
| [Day 22](https://adventofcode.com/2021/day/22) | ⭐ | ⭐ |
| [Day 24](https://adventofcode.com/2021/day/24) | ⭐ | ⭐ |
| [Day 25](https://adventofcode.com/2021/day/25) | ⭐ |   |
<!--- advent_readme_stars table --->

## Benchmarks
Done with [hyperfine](https://github.com/sharkdp/hyperfine) (see file `benchmark.bat`)
| Command | Mean [ms] | Min [ms] | Max [ms] | Relative |
|:---|---:|---:|---:|---:|
| `benchmark\adv1.exe` | 9.0 ± 0.7 | 8.2 | 12.3 | 1.09 ± 0.13 |
| `benchmark\adv2.exe` | 9.7 ± 0.9 | 8.4 | 14.8 | 1.18 ± 0.16 |
| `benchmark\adv3.exe` | 9.1 ± 1.0 | 7.7 | 13.2 | 1.10 ± 0.16 |
| `benchmark\adv4.exe` | 13.2 ± 1.3 | 11.5 | 19.6 | 1.59 ± 0.22 |
| `benchmark\adv5.exe` | 16.1 ± 1.4 | 14.7 | 23.9 | 1.95 ± 0.25 |
| `benchmark\adv6.exe` | 8.3 ± 0.8 | 6.7 | 12.8 | 1.00 |
| `benchmark\adv7.exe` | 12.9 ± 2.6 | 9.2 | 20.4 | 1.56 ± 0.35 |
| `benchmark\adv8.exe` | 12.1 ± 1.5 | 9.4 | 17.0 | 1.46 ± 0.23 |
| `benchmark\adv9.exe` | 14.3 ± 1.9 | 11.1 | 24.9 | 1.72 ± 0.28 |
| `benchmark\adv10.exe` | 11.2 ± 1.5 | 8.8 | 14.9 | 1.36 ± 0.22 |
| `benchmark\adv11.exe` | 11.4 ± 1.2 | 9.2 | 16.8 | 1.38 ± 0.19 |
| `benchmark\adv12.exe` | 100.6 ± 6.0 | 90.3 | 113.0 | 12.16 ± 1.38 |
| `benchmark\adv13.exe` | 21.9 ± 2.0 | 18.5 | 30.4 | 2.64 ± 0.35 |
| `benchmark\adv14.exe` | 16.5 ± 6.9 | 9.3 | 38.7 | 1.99 ± 0.85 |

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
