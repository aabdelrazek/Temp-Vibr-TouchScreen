
if [ "$1" ]; then
/mnt/c/Users/aba5ac3/.vscode/extensions/vsciot-vscode.vscode-arduino-0.6.0-win32-x64/assets/platform/win32-x64/arduino-cli/arduino-cli.exe upload -p $1 -l serial -v -b esp32:esp32:esp32s3 --board-options JTAGAdapter=default,PSRAM=opi,FlashMode=qio,FlashSize=4M,LoopCore=1,EventsCore=1,USBMode=hwcdc,CDCOnBoot=default,MSCOnBoot=default,DFUOnBoot=default,UploadMode=default,PartitionScheme=huge_app,CPUFreq=240,UploadSpeed=921600,DebugLevel=none,EraseFlash=none -P esptool --input-dir ../build/

else

arduino-cli compile -v -b esp32:esp32:esp32s3 --board-options JTAGAdapter=default,PSRAM=opi,FlashMode=qio,FlashSize=4M,LoopCore=1,EventsCore=1,USBMode=hwcdc,CDCOnBoot=default,MSCOnBoot=default,DFUOnBoot=default,UploadMode=default,PartitionScheme=huge_app,CPUFreq=240,UploadSpeed=921600,DebugLevel=none,EraseFlash=none --build-cache-path ../build/core --build-path ../build/obj --output-dir ../build TouchScreenApp.ino
fi