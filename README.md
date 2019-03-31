This project has multiple folders that have examples of how Wasm works with Emscripten in a couple of different languages (C++, Rust, Go). You'll need to have [emscripten](https://github.com/emscripten-core/emscripten) installed to run these examples.

## RotatingTriangle

Built using C++ & GLFW

- Build: `make`
- Clean: `make clean`
- Build, but remove objects leaving the build dir: `make dist`

You can then use `python -m SimpleHTTPServer 8080` and open your browser to [http://localhost:8080/build/](http://localhost:8080/build/).

You can see the current version live [here](https://latte.tfaieta.now.sh/).

## TealWindow

Built using C++ & GLFW

- Build: `make`
- Clean: `make clean`
- Build, but remove objects leaving the build dir: `make dist`

You can then use `python -m SimpleHTTPServer 8080` and open your browser to [http://localhost:8080/build/](http://localhost:8080/build/).
