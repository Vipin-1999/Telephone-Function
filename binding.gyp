{
  "targets": [
    {
      "target_name": "Telephone",
      "sources": [ "telephone.cpp", "telephone_wrap.cxx" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}