<h1 align="center"><code>Zombie Apocalypse Survivor 1.1</code></h1>

Zombie Apocalypse Survivor is a 16-bit retro style adventure game on the Windows 3.x terminal built with the TurboC/C++ compiler (v3.2.2, 1992).

# Background

The program uses the ancient 1989 C++ 2.0 ([C with Classes and more](https://en.wikipedia.org/wiki/C%2B%2B#History)), the immediate precursor to the ISO/IEC 14882-1998 standard named C++98 which was later amended by C++03, C++11, C++14, C++17 and the latest as of this commit, C++20. We built what was our CS assignment as High School sophomores, on Borland's [Turbo C/C++ IDE for hobbyists](https://en.wikipedia.org/wiki/Turbo_C%2B%2B) in the [DOSBox](https://en.wikipedia.org/wiki/DOSBox) emulator for 16-bit Windows. Around the same time of C++ 2.0 being popular, the pop-culture icon in the video game industry, [Doom](https://en.wikipedia.org/wiki/Doom_(1993_video_game)) for MS-DOS was released.

*...but why C++ 2.0?* Because retro is cool! <sup><a href="https://www.quora.com/Why-is-Turbo-C++-still-being-used-in-Indian-schools-and-colleges">see also</a></sup>

# Hello World

<p align="center"><img width="100%" src="https://github.com/jay-io/ZAS-16/blob/b09f81c93e23058f3b0514b872b0796963f350eb/assets/zas.png" /></p>

# Authors & Contributors
- [Jayanta Pandit](mailto:jay.dnb@outlook.in)
- [Abesh Roy](mailto:abeshroyargentina@gmail.com)
- [Sourish Mandal](https://github.com/)
- [Kunal Samanta](https://instagram.com/kun_sam02)

# Run
The 16-bit executable depends on DOSBox to run on modern 64 bit systems (variable OS) and requires to be installed first. The next step involves cloning this repository, mounting the `bin` directory as legacy drive `C` on DOSBox terminal, switching prompt to `C:\>` and running `ZAS.EXE`. I've cut down the complexity and prepared the executable binary before hand to avoid rebuilding the code using the TC compiler.

### Windows:
  1. Install DOSBox 0.74 from [dosbox.com](https://www.dosbox.com/download.php?main=1).
  2. Run DOSBox.
  3. Assuming you cloned the repository and the path to the repository root is `C:\path\to\repo\root`, run the following at the `Z:\>` prompt and switch to `C:` and `cd` into `bin` after confirmation:
<pre>
mount c C:\path\to\repo\root
c:
cd bin
</pre>
  4. Then execute `ZAS.EXE` to play the game:
<pre>zas</pre>
  
### Ubuntu (or refer to your distro specific packages):
  1. Install DOSBox 0.74.
```
sudo apt install dosbox
```
  2. Run DOSBox.
  3. Assuming you cloned the repository and the path to the repository root is `$ZASROOT`, run the following at the `Z:\>` prompt and switch to `C:` and `cd` into `bin` after confirmation:
<pre>
mount c $ZASROOT
c:
cd bin
</pre>
  4. Then execute `ZAS.EXE` to play the game:
<pre>zas</pre>

### MacOS:
  1. Install DOSBox 0.74 from [dosbox.com](https://www.dosbox.com/download.php?main=1) or use `brew`:
```
brew install dosbox
```
  3. Run DOSBox.
  4. Assuming you cloned the repository and the path to the repository root is `C:\path\to\repo\root`, run the following at the `Z:\>` prompt and switch to `C:` and `cd` into `bin` after confirmation:
<pre>
mount c C:\path\to\repo\root
c:
cd bin
</pre>
  4. Then execute `ZAS.EXE` to play the game:
<pre>zas</pre>

# Build
Out of sheer curiosity, if you feel like compiling the source code from scratch and see how things worked out for us, I've included the TurboC IDE binary labelled `TC.EXE` in `bin/TCC`. Follow the steps to get the prehistoric IDE up and running:
  1. Install, run and mount your workspace as `C` on DOSBox 0.74 (refer steps 1-3 above).
  2. `cd` into the TCC directory and execute TurboC IDE:
```
cd bin
cd tcc
tc
```
  3. `File` > `Open` (from repo root) `zas.cpp` in a new window > `Run` > `Run`

# License
[```GPL License```](./LICENSE) This project is licensed under the GNU General Public License v3.0.
