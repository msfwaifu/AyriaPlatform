Ayrias Platform Plugin
---

This plugin serves as an abstraction layer for common platforms, such as Steam.
The aim is to provide a common interface for indie developers and modders alike.
As well as speed up data-gathering operations.

Extensionloading
--

While you can inject your new extension into an application and have it run, the easiest way would be to use the Bootstrap module from Ayria (https://github.com/AyriaPublic/NativeBootstrap).
Once injected, this module will attempt to load all extensions from ./Plugins/ and call the initialization exports as needed.
This plugin can also replace the original dll (e.g. steam_api.dll) and will automatically try to load the bootstrap module.
