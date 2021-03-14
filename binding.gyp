{
    "targets": [
        {
            "target_name": "sum",
            "sources": [ "./core/cpp/sum.cpp" ],
            "cflags!": [ "-fno-exceptions" ],
            "cflags_cc!": [ "-fno-exceptions" ],
            "defines": [ "NAPI_DISABLE_CPP_EXCEPTIONS" ],
        }
    ]
}