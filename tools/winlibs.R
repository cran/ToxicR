# Build against mingw-w64 build of nlopt
if(!file.exists("../windows/nlopt-2.7.1/include/nlopt.hpp")){
    download.file("https://github.com/rwinlib/nlopt/archive/v2.7.1.zip", "lib.zip", quiet = TRUE)
    dir.create("../windows", showWarnings = FALSE)
    unzip("lib.zip", exdir = "../windows")
    unlink("lib.zip")
}
if (!file.exists("../windows/gsl-2.7/include/gsl/gsl_blas.h")) {
    download.file("https://github.com/rwinlib/gsl/archive/v2.7.zip", "lib.zip", quiet = TRUE)
    dir.create("../windows", showWarnings = FALSE)
    unzip("lib.zip", exdir = "../windows")
    unlink("lib.zip")
}