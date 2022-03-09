<h1 align="center">Minimal-pybind11-cmake</h1>

This repo is expected to help you build projects based on [pybind11](https://github.com/pybind/pybind11) using [CMake](https://cmake.org/).

## Install to current directory

To configure:

```bash
cmake -S . -B build
```

To build and install to current directory:

```bash
cmake --build build --target install
```

To test:

```bash
python test.py
```

## Install to python packages directory

Use `setup.py` provided by [pybind/cmake_example](https://github.com/pybind/cmake_example):

```bash
pip install .
```

To test:

```bash
python test.py
```
