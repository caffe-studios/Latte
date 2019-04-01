const js = import("../pkg/rust_example.js");
js.then(js => {
  js.greet("WebAssembly");
});
