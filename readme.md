# Demo unit test

This demo can be expanded in the future, currently it shows a simple example of a unit test.

## Folder structure

```
.
├── CMakeLists.txt
├── conanfile.txt
├── include
│   ├── src
│   │   └── main.h
│   └── test
│       └── unit_testing.h
├── readme.md
├── src
│   └── main.cpp
└── test
    └── unit_testing.cpp
```

running `main` will run the tests. 
A test can be in `unit_testing.cpp`.

## Run guide

First make sure you have `conan` installed, by running the command 
```
$ conan
```

If you do not have this installed then install it using `pip`, 
you can create a virtual env (which I recommend). The run the following command:
```
$ pip install conan
```

now make sure your compiler runs: `compiler.libcxx=libstdc++11`. 
I personally changed the default profile. This can be found in:

```
$ cd ~/.conan/profiles
```
Open the default file and edit or add the following value: `compiler.libcxx=libstdc++11`

now go back to your project folder and enter the build folder `cd ./<your build forlder>` and then run:

```
$ conan install .. --build=missing 
```

This should succeed. Now you can run the `main` function inside the `src` folder.

