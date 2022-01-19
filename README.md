<h1 align="center"><code>Zombie Apocalypse Survivor</code></h1>

<img src="https://img.shields.io/badge/Version-1.1-orange" /> <img src="https://img.shields.io/badge/C%2B%2B-2.0-success" /> <img src="https://img.shields.io/badge/Environment-16--bit-critical" /> <img src="https://img.shields.io/badge/Emulator-DOSBox%20v0.74-informational" /> <img src="https://img.shields.io/badge/Genre-Retrogaming-blueviolet" />

ZAS is a 16-bit environment old-school adventure game on the Windows 3.x terminal built with the TurboC/C++ compiler (v3.2.2, 1992).

## Contents
- [Background](https://github.com/jay-io/ZAS-16/blob/dev/README.md#background)
- [Loadscreen shot](https://github.com/jay-io/ZAS-16/blob/dev/README.md#hello-world)
- [Documentation](https://github.com/jay-io/ZAS-16/blob/dev/README.md#documentation)
- [Run](https://github.com/jay-io/ZAS-16/blob/dev/README.md#run)
  - [Windows](https://github.com/jay-io/ZAS-16/blob/dev/README.md#windows)
  - [Ubuntu](https://github.com/jay-io/ZAS-16/blob/dev/README.md#ubuntu-or-refer-to-your-distro-specific-packages)
  - [macOS](https://github.com/jay-io/ZAS-16/blob/dev/README.md#macos)
- [Build](https://github.com/jay-io/ZAS-16/blob/dev/README.md#build)
- [Authors & Contributors](https://github.com/jay-io/ZAS-16/blob/dev/README.md#authors--contributors)
- [License](https://github.com/jay-io/ZAS-16/blob/dev/README.md#license)

## Background

The program uses the ancient 1989 C++ 2.0 ([C with Classes and more](https://en.wikipedia.org/wiki/C%2B%2B#History)), the immediate precursor to the ISO/IEC 14882-1998 standard named C++98 which was later amended by C++03, C++11, C++14, C++17 and the latest as of this commit, C++20. We built what was our CS assignment as High School sophomores, on Borland's [Turbo C/C++ IDE for hobbyists](https://en.wikipedia.org/wiki/Turbo_C%2B%2B) in the [DOSBox](https://en.wikipedia.org/wiki/DOSBox) emulator for 16-bit Windows. Around the same time of C++ 2.0 being popular, the pop-culture icon in the video game industry, [Doom](https://en.wikipedia.org/wiki/Doom_(1993_video_game)) for MS-DOS was released.

*...but why C++ 2.0?* Because retro is cool! <sup><a href="https://www.quora.com/Why-is-Turbo-C++-still-being-used-in-Indian-schools-and-colleges">see also</a></sup>

## Hello World

<p align="center"><img width="100%" src="https://github.com/jay-io/ZAS-16/blob/b09f81c93e23058f3b0514b872b0796963f350eb/assets/zas.png" /></p>

## Documentation
The project documentation can be found in the [`docs`](./docs) folder.

## Run
The 16-bit executable depends on DOSBox to run on modern 64 bit systems (variable OS) and requires it to be installed first. The next step involves cloning this repository, mounting the [`bin`](./bin) directory as legacy drive `C` on DOSBox terminal, switching prompt to `C:\>` and running `ZAS.EXE`. I've cut down the complexity and prepared the executable binary before hand to avoid rebuilding the code using the TC compiler.

<blockquote><h6>Please note that the executables anywhere in this repository are not stand-alone and require the BGI graphics library with the path <code>C:\TURBOC3\BGI\</code> relative to the directory mounted as <code>C</code> (here, <a href="./bin"><code>./bin</code></a>) as assigned in the source. Following a wrong mount path, a <code>BGI Error</code> is encountered at the console and the program fails to load.</h6></blockquote>

### Windows:
  1. Install DOSBox 0.74 from [dosbox.com](https://www.dosbox.com/download.php?main=1).
  2. Run DOSBox.
  3. Assuming you cloned the repository and the path to the repository root is `C:\path\to\repo\root`, run the following at the `Z:\>` prompt and switch to `C:`. Note the appended `\bin`:
```bat
mount c C:\path\to\repo\root\bin
c:
```
  4. Then execute `ZAS.EXE` to play the game:
```bat
zas
```
  
### Ubuntu (or refer to your distro specific packages):
  1. Install DOSBox 0.74.
```bash
sudo apt install dosbox
```
  2. Run DOSBox.
  3. Assuming you cloned the repository and the path to the repository root is `/path/to/repo/root`, run the following at the `Z:\>` prompt and switch to `C:`. Note the appended `/bin`:
```bat
mount c /path/to/repo/root/bin
c:
```
  4. Then execute `ZAS.EXE` to play the game:
```bat
zas
```

### macOS:
  1. Install DOSBox 0.74 from [dosbox.com](https://www.dosbox.com/download.php?main=1) or use [brew](https://brew.sh/):
```zsh
brew install dosbox
```
  2. Run DOSBox.
  3. Assuming you cloned the repository and the path to the repository root is `/path/to/repo/root`, run the following at the `Z:\>` prompt and switch to `C:`. Note the appended `/bin`:
```bat
mount c /path/to/repo/root/bin
c:
```
  4. Then execute `ZAS.EXE` to play the game:
```bat
zas
```

## Build
Out of sheer curiosity, if you feel like compiling the source code from scratch and see how things worked out for us, I've included the TurboC IDE binary labelled `TC.EXE` in `bin/TCC`. Follow the steps to get the prehistoric IDE up and running:
  1. Install and run DOSBox 0.74 (refer steps above).
  2. Assuming you cloned the repository and the path to the repository root is `/path/to/repo/root` or `C:\path\to\repo\root`, run the following at the `Z:\>` prompt and switch to `C:`. Note the appended `/bin` and `\bin`:

**Unix:**
```bat
mount c /path/to/repo/root/bin
c:
```
**Windows:**
```bat
mount c C:\path\to\repo\root\bin
c:
```
  3. `cd` into the `TCC` directory and execute `TC.EXE`:
```bat
cd tcc
tc
```
  4. `File` ➜ `Open` the source `C:\TURBOC3\SOURCE\ZAS.CPP` in a new window ➜ `Run` ➜ `Run (Ctrl + F9)`. This will build the 16-bit binary in the path [`C:\TURBOC3\SOURCE`](./bin/TURBOC3/SOURCE/) and run it on the terminal. An additional binary data file labelled `PLAYPROF.DAT` will be created which will store the user profiles and player statistics.

## Authors & Contributors
- [Jayanta Pandit](mailto:jay.dnb@outlook.in)
- [Abesh Roy](mailto:abeshroyargentina@gmail.com)
- [Sourish Mandal](https://github.com/where-are-you-pleading-face)
- [Kunal Samanta](https://instagram.com/kun_sam02)

## License
[```GPL License```](./LICENSE) This project is licensed under the GNU General Public License v3.0.
