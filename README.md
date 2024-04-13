# wasm-group-11
wasm-group-11 created by GitHub Classroom

Para ejecutar tener instalado emsdk y python3

ejecutar: 
- ``emcc factorizacion.c -o factorizacion.js -sEXPORTED_FUNCTIONS=_factorizacionPrima -sEXPORTED_RUNTIME_METHODS=UTF8ToString,ccall``
- ``python3 -m http.server``

abrir index

ejecutar para otras optimizaciones (O2 y O3 respectivamente):
- ``emcc factorizacion.c -o factorizacion2.js -sEXPORTED_FUNCTIONS=_factorizacionPrima -sEXPORTED_RUNTIME_METHODS=UTF8ToString,ccall -O2``
- ``emcc factorizacion.c -o factorizacion3.js -sEXPORTED_FUNCTIONS=_factorizacionPrima -sEXPORTED_RUNTIME_METHODS=UTF8ToString,ccall -O3``

limpiar cache de emcc
- ``emcc --clear-cache``