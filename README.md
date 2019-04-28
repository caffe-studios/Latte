This project has multiple folders that have examples of how Wasm works with Emscripten in a couple of different languages (C/C++, Rust). You'll need to have [emscripten](https://github.com/emscripten-core/emscripten) installed to run these examples.

## Some Context

Early 2019 I set out to explore WebAssembly because I was generally looking for ways to improve performance in web applications. This repo is all of my findings and examples.

##  Building the Examples
For convenience, I have added a `tasks.json` that you can use to add a build task to VSCode in order to run from the command palette. It makes things a lot easier when you are just trying to make an example work and have figured out how to properly use all the Emscripten flags.

I've also added `MakeFile`'s to some examples so you can also see examples going that route. I personally think that the `MakeFile` approach is better because it's a more editor-agnostic approach.

## Important Emscripten Build Flags for WASM

* `-s WASM=1` - Export to WASM
* `-s SIDE_MODULE=1` - Only generate WASM code, no glue code
* `-s BINARYEN_ASYNC_COMPILATION` - Compile WASM into async code, favorable in JS

# Examples

## RotatingTriangle

Built using C & GLFW

- Build: `make`
- Clean: `make clean`
- Build, but remove objects leaving the build dir: `make dist`

You can then use `python -m SimpleHTTPServer 8080` and open your browser to [http://localhost:8080/build/](http://localhost:8080/build/).

You can see the current version live [here](https://latte.tfaieta.now.sh/).

## TealWindow

Built using C & GLFW

- Build: `make`
- Clean: `make clean`
- Build, but remove objects leaving the build dir: `make dist`

You can then use `python -m SimpleHTTPServer 8080` and open your browser to [http://localhost:8080/build/](http://localhost:8080/build/).

## WithGlue

Built using C and SDL. Particularly useful for seeing the effects of adding the `SIDE_MODULE=1` flag to `emcc` and will output code to make sure you have accompanying HTML/JS to go with the `.wasm`  binary.

## RustExample

Built using Rust and wasm-pack, a simple "Hello, WebAssembly!".

To install Rust, see [here](https://www.rust-lang.org/tools/install).

To install wasm-pack: `cargo install wasm-pack`

Once you have that up: `wasm-pack build`
Then: `cd build`
Then: `npm run serve`
