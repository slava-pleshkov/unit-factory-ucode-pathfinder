<p align="center">
    <a href="https://unitfactory.net/en/" target="_blank">
        <img src="https://github.com/slava-pleshkov/unit-factory-ucode/blob/master/.git_images/unit_logo.png?raw=true" height="100px">
    </a>
    <a href="https://ucode.world/en/" target="_blank">
        <img src="https://github.com/slava-pleshkov/unit-factory-ucode/blob/master/.git_images/ucode_logo.png?raw=true" height="100px">
    </a>
    <h1 align="center">unit-factory-ucode-pathfinder</h1>
    <br>
</p>
<p align="center">🔭 Learn pathfinding algorithms</p>

##  Got skills

Reasoning & Argumentation, Creativity, Communication, Critical Thinking, Problem Solving, Analysis, Innovation Thinking, Agility & Adaptability, Initiative, Responsibility, Self-Management, UNIX, Git, Procedural Programming, Algorithms, C

<hr>

## Building the program
1. Download/Clone the source code
2. `cd` into the root directory
3. Run `make`

## Usage example

```
./pathfinder tests_file/file_name
```
## Examples

###  File

```
8
Kyiv-Kharkiv,471
Nikopol-Kharkiv,340
Kyiv-Warsaw,766
Kyiv-Paris,2403
Kyiv-Prague,1141
Kyiv-Singapore,11864
Kyiv-Tokyo,11079
```

###  Output

```
========================================
Path: Kyiv -> Kharkiv
Route: Kyiv -> Kharkiv
Distance: 471
========================================
========================================
Path: Kyiv -> Nikopol
Route: Kyiv -> Kharkiv -> Nikopol
Distance: 471 + 340 = 811
========================================
========================================
Path: Kyiv -> Warsaw
Route: Kyiv -> Warsaw
Distance: 766
========================================
========================================
Path: Kyiv -> Paris
Route: Kyiv -> Paris
Distance: 2403
========================================
========================================
Path: Kyiv -> Prague
Route: Kyiv -> Prague
Distance: 1141
========================================
========================================
Path: Kyiv -> Singapore
Route: Kyiv -> Singapore
Distance: 11864
========================================
========================================
Path: Kyiv -> Tokyo
Route: Kyiv -> Tokyo
Distance: 11079
========================================
========================================
Path: Kharkiv -> Nikopol
Route: Kharkiv -> Nikopol
Distance: 340
========================================
========================================
Path: Kharkiv -> Warsaw
Route: Kharkiv -> Kyiv -> Warsaw
Distance: 471 + 766 = 1237
========================================
========================================
Path: Kharkiv -> Paris
Route: Kharkiv -> Kyiv -> Paris
Distance: 471 + 2403 = 2874
========================================
========================================
Path: Kharkiv -> Prague
Route: Kharkiv -> Kyiv -> Prague
Distance: 471 + 1141 = 1612
========================================
========================================
Path: Kharkiv -> Singapore
Route: Kharkiv -> Kyiv -> Singapore
Distance: 471 + 11864 = 12335
========================================
========================================
Path: Kharkiv -> Tokyo
Route: Kharkiv -> Kyiv -> Tokyo
Distance: 471 + 11079 = 11550
========================================
========================================
Path: Nikopol -> Warsaw
Route: Nikopol -> Kharkiv -> Kyiv -> Warsaw
Distance: 340 + 471 + 766 = 1577
========================================
========================================
Path: Nikopol -> Paris
Route: Nikopol -> Kharkiv -> Kyiv -> Paris
Distance: 340 + 471 + 2403 = 3214
========================================
========================================
Path: Nikopol -> Prague
Route: Nikopol -> Kharkiv -> Kyiv -> Prague
Distance: 340 + 471 + 1141 = 1952
========================================
========================================
Path: Nikopol -> Singapore
Route: Nikopol -> Kharkiv -> Kyiv -> Singapore
Distance: 340 + 471 + 11864 = 12675
========================================
========================================
Path: Nikopol -> Tokyo
Route: Nikopol -> Kharkiv -> Kyiv -> Tokyo
Distance: 340 + 471 + 11079 = 11890
========================================
========================================
Path: Warsaw -> Paris
Route: Warsaw -> Kyiv -> Paris
Distance: 766 + 2403 = 3169
========================================
========================================
Path: Warsaw -> Prague
Route: Warsaw -> Kyiv -> Prague
Distance: 766 + 1141 = 1907
========================================
========================================
Path: Warsaw -> Singapore
Route: Warsaw -> Kyiv -> Singapore
Distance: 766 + 11864 = 12630
========================================
========================================
Path: Warsaw -> Tokyo
Route: Warsaw -> Kyiv -> Tokyo
Distance: 766 + 11079 = 11845
========================================
========================================
Path: Paris -> Prague
Route: Paris -> Kyiv -> Prague
Distance: 2403 + 1141 = 3544
========================================
========================================
Path: Paris -> Singapore
Route: Paris -> Kyiv -> Singapore
Distance: 2403 + 11864 = 14267
========================================
========================================
Path: Paris -> Tokyo
Route: Paris -> Kyiv -> Tokyo
Distance: 2403 + 11079 = 13482
========================================
========================================
Path: Prague -> Singapore
Route: Prague -> Kyiv -> Singapore
Distance: 1141 + 11864 = 13005
========================================
========================================
Path: Prague -> Tokyo
Route: Prague -> Kyiv -> Tokyo
Distance: 1141 + 11079 = 12220
========================================
========================================
Path: Singapore -> Tokyo
Route: Singapore -> Kyiv -> Tokyo
Distance: 11864 + 11079 = 22943
========================================
```

## Possible errors

1. Invalid number of command-line arguments.
2. The file does not exist.
3. The file is empty.
4. The first line contains something other than digits.
5. One of the remaining lines doesn't match the pattern ```str1-str2,n```.
6. The number received on the first line does not coincide with the number of islands.

## License

Collision is an open-sourced software licensed under the [MIT license](LICENSE.md).
