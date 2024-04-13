# wasm-group-11
wasm-group-11 created by GitHub Classroom

Para ejecutar tener instalado emsdk y python3

ejecutar: 
- ``emcc factorizacion.c -o factorizacion.js -sEXPORTED_FUNCTIONS=_factorizacionPrima -sEXPORTED_RUNTIME_METHODS=UTF8ToString,ccall``
- ``python3 -m http.server``

abrir index