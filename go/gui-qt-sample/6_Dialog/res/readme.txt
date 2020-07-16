Introduction
Qt is a free and open-source widget toolkit for creating graphical user interfaces as well as cross-platform applications that run on various software and hardware platforms with little or no change in the underlying codebase.

Go, also known as Golang, is a programming language designed at Google.

therecipe/qt allows you to write Qt applications entirely in Go or JavaScript.

Beside the language bindings provided, therecipe/qt also greatly simplifies the deployment of Qt applications to various software and hardware platforms.

At the time of writing, almost all Qt functions and classes are accessible from Go and JavaScript, and you should be able to find everything you need to build fully featured Qt applications.

Impressions
Gallery of example applications.

JavaScript Demo | source

Installation
The following instructions assume that you already installed Go and Git

Windows (more info)
set GO111MODULE=off
go get -v github.com/therecipe/qt/cmd/... && for /f %v in ('go env GOPATH') do %v\bin\qtsetup test && %v\bin\qtsetup -test=false
macOS (more info)
export GO111MODULE=off; xcode-select --install; go get -v github.com/therecipe/qt/cmd/... && $(go env GOPATH)/bin/qtsetup test && $(go env GOPATH)/bin/qtsetup -test=false
Linux (more info)
export GO111MODULE=off; go get -v github.com/therecipe/qt/cmd/... && $(go env GOPATH)/bin/qtsetup test && $(go env GOPATH)/bin/qtsetup -test=false
Resources
Installation
Getting Started
Wiki
Qt Documentation
FAQ
#qt-binding Slack channel (invite)
Deployment Targets
Target	Arch	Linkage	Docker Deployment	Host OS
Windows	32 / 64	dynamic / static	Yes	Any
macOS	64	dynamic	Yes	Any
Linux	arm / arm64 / 64	dynamic / static / system	Yes	Any
Android (+Wear)	arm / arm64	dynamic	Yes	Any
Android-Emulator (+Wear)	32	dynamic	Yes	Any
SailfishOS	arm	system	Yes	Any
SailfishOS-Emulator	32	system	Yes	Any
Raspberry Pi (1/2/3)	arm	dynamic / system	Yes	Any
Ubuntu Touch	arm / 64	system	Yes	Any
JavaScript	32	static	Yes	Any
WebAssembly	32	static	Yes	Any
iOS	arm64	static	No	macOS
iOS-Simulator	64	static	No	macOS
AsteroidOS	arm	system	No	Linux
FreeBSD	32 / 64	system	No	FreeBSD
License
This package is released under LGPLv3

Qt itself is licensed and available under multiple licenses.