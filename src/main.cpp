#include <log_lib/log.h>
#include <pybind11/pybind11.h>

int my_log() {
    log();
    return 0;
}

PYBIND11_MODULE(example, m) {
    m.doc() = "Example";  // optional module docstring

    m.def("my_log", &my_log, "A function that whispering words.");
}
