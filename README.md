# C++ Learning

A repo for me to learn how to write C++ and use CMake.

## Getting Started

1. `pipenv install`
2. `conan install . -if build`
3. `conan build . -sf . -if build`

You can now run anything in `./bin`

## VSCode Development

You'll want to add `"compileCommands": "${workspaceFolder}/compile_commands.json"` to your `./vscode/c_cpp_properties.json` file to get correct intellisense.
