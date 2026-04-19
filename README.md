# Crab Champions - Example Modding Project

This is an example UE4 project containing C++ stub headers and source files generated from the Crab Champions game using [UE4SS](https://github.com/UE4SS-RE/RE-UE4SS) (UHTHeaderDump) and [UE4GameProjectGenerator](https://github.com/Jeongmin94/UE4GameProjectGenerator).

These stubs allow you to reference the game's classes, structs, and enums in your own Blueprint or C++ mods without needing the actual game source code.

## Version Info

- **Game branch:** Main (not beta)
- **Generated on:** 18/04/2026
- **Engine version:** UE 4.27

## Contents

- `CrabChampions.uproject` - The project file (UE 4.27)
- `Source/CrabChampions/Public/` - Header files (.h) with class/struct/enum declarations
- `Source/CrabChampions/Private/` - Source files (.cpp) with minimal stub implementations
- `Source/CrabChampions/CrabChampions.Build.cs` - Build configuration with module dependencies
- `Source/CrabChampionsEditor.Target.cs` - Editor build target
- `Source/CrabChampionsGame.Target.cs` - Game build target
- `Plugins/EnginePlugins/` - Engine plugin stubs required by the game
- `Content/` - Placeholder content
- `cook_assets.bat`, `package.bat`, `run_all.bat` - Build scripts from [Dolton's CrabChampions-Modkit](https://github.com/Dolton20/CrabChampions-Modkit)
- `Tools/` - Modkit tooling (packing scripts, user settings, config)

## How This Was Generated

1. Run [UE4SS](https://github.com/UE4SS-RE/RE-UE4SS) against Crab Champions to produce the UHTHeaderDump
2. Extract the game's `.uproject` and `.upluginmanifest` files from the game's `.pak` files (e.g. using FModel)
3. Run UE4GameProjectGenerator with the following command:

```
UE4Editor-Cmd.exe GameProjectGenerator.uproject -run=ProjectGenerator -HeaderRoot="<UHTHeaderDump path>" -ProjectFile="<game .uproject path>" -PluginManifest="<game .upluginmanifest path>" -OutputDir="<output directory>" -stdout -unattended -NoLogTimes
```

## Usage

## Setup

1. Clone this repository:
   ```
   git clone <repo-url>
   ```

2. Configure the paths in `Tools/user_settings/`:
   - `editor_directory.txt` - path to your UE4 4.27 editor `Binaries/Win64` directory
   - `game_directory.txt` - path to your Crab Champions game installation
   - `package_output.txt` - output path for the packaged `.pak` file

3. Open `CrabChampions.uproject` with UE 4.27

4. Add your own Blueprint or C++ classes that reference the game's types

5. Use the build scripts (`cook_assets.bat`, `package.bat`, or `run_all.bat`) to cook and package your mod

## License

This project is licensed under [CC BY-NC 4.0](https://creativecommons.org/licenses/by-nc/4.0/). You are free to copy and modify with attribution. Commercial use is not permitted.
