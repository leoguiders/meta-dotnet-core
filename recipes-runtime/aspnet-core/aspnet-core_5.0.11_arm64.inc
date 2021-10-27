###################################################################################################
# Contains the URL and checksums to download version 5.0.11 of the ARM 64-bit ASP .Net Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 5.0.11 by Jan Philipp Giel 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/95be731b-40c7-4fc8-8649-e74edf9c56d7/6d20942920ca8bebaccf8c359d3866a6/aspnetcore-runtime-5.0.11-linux-arm64.tar.gz;subdir=aspnet-${PV}"

SRC_URI[md5sum] = "8432fb08f335bd5287f10b1fea0fad50"
SRC_URI[sha256sum] = "3414c99afc807866a42f98c8315979e135f0ef1213d473ad28e8998daab3abfe"
