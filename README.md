This is small project is to test the publishing of compositions as a part of an addon.


How to Build
---

1. Download the Arma 3 Tools
2. Choose a destination folder for your Mod
3. Create an `Addons` directory within that folder
4. Launch Arma 3 Tools and select `Play Arma 3 Tools`
5. Hit Play
6. Select `Addon Builder`
7. Choose this repo as your source directory and the Addons folder we created earlier as your destination. For example
```
SOURCE:      C:\_KP\Arma3Mods\Arma3CompositionTest
Destination: C:\_KP\Arma3Mods\Publish\RRCC-TEST-ADDON\Addons
```
8. Select PACK
9. Close Addon Builder once it is complete

To Publish this mod to the Workshop, use the Publisher included in the Arma 3 Tools launcher.

!TODO Add details for faster testing without uploading to the workshop.

Exporting you Composition for an Addon/Mod from the Eden editor
---

Steps stolen from <https://github.com/GdC-Framework/GdC_lib/blob/master/gdc_lib_compositions/config.cpp>

Export a composition:

1. Select the objects of the composition in 3DEN
2. Open the debug console in 3DEN
3. Execute the command below:
    *  The first parameter corresponds to the center of the composition. The position of the objects is calculated according to this center. This center corresponds to the position of the mouse pointer when you click to create the composition.
    * In the below case, the center chosen is the center of your screen.
```
[(screenToWorld [0.5,0.5]), (get3DENSelected "object")] call BIS_fnc_exportCfgGroups;
```
4. Paste the contents of the clipboard in the right place in the config.
