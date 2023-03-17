# webassembly-app

## Instructions

### Change to home directory and clone Emscripten SDK
`cd ~/`
`git clone https://github.com/emscripten-core/emsdk.git`

### Add Emscripten to PATH
`export PATH=$PATH:~/emsdk:~/emsdk/node/14.18.2_64bit/bin:~/emsdk/upstream/emscripten`

### Install latest Emscripten SDK
`emsdk install latest`

### Create example WASM application
`mkdir ~/webassembly-app`
`cd ~/webassembly-app`

### Activate Emscripten SDK in WASM application directory
`emsdk activate latest`

### Check Emscripten version
`emcc -v`

### Compile C code using Emscripten
`noglob emcc secret_number.c -o SecretNumber.js -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=[ccall]`

### Run C code as JavaScript file using Node.js
`node SecretNumber.js`
