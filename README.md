# Solunar Engine

[![Build engine](https://github.com/ugozapad/solunar/actions/workflows/build-engine.yml/badge.svg)](https://github.com/ugozapad/solunar/actions/workflows/build-engine.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://github.com/ugozapad/solunar/blob/main/LICENSE)

An open-source 3D graphics engine created to learn how games and engines works

## Features

- Custom compile-time reflection system
- Crossplatform support
- OpenGL 3.3 Forward renderer (which use direct state access if enabled)
- Entity Component node-based scene hierarchy

## Requirements

- C++ 14 compiler
- CMake 3.16 or higher

## Building

- Get the repository

  ```shell
  git clone https://github.com/ugozapad/solunar.git --recursive
  ```

- Generate projects or build scripts

  ```shell
  cmake -B build -G "Visual Studio 17 2022"
  ```

- Build using target build system

  ```shell
  msbuild build\solunar.sln
  ```

## Credits
Solunar uses several open-source libraries:
- GLFW (https://github.com/glfw/glfw)
- GLAD (https://github.com/Dav1dde/glad)
- GLM (https://github.com/g-truc/glm)

Additional help and inspiration from:
- 3D Game Engine Architecture, Engineering Real-Time Applications with Wild Magic
- Real-Time Rendering, Third Edition

## License

This project licensed under terms of the __MIT__ license. See [this](./LICENSE) file for details
