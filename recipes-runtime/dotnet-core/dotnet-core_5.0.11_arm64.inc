###################################################################################################
# Contains the URL and checksums to download version 5.0.11 of the ARM 64-bit .Net Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 5.0.11 by Jan Philipp Giel 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/c1d77e74-541f-40a6-b84d-edc6626530f1/d65b9d134f80a8cbc0d4ee6437f67bf5/dotnet-runtime-5.0.11-linux-arm64.tar.gz;subdir=dotnet-${PV}"

SRC_URI[md5sum] = "b0fefe074027baa9851ae62e48700cff"
SRC_URI[sha256sum] = "60c6607fa56338d2e57341ab83375f98e53e229bec1bfa86907e45c2dbf0a343"

