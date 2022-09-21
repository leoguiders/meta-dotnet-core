###################################################################################################
# Contains the URL and checksums to download version 6.0.9 of the x86 64-bit ASP .Net Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 6.0.9 by Jan Philipp Giel 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/1a2bca2e-f525-4ecf-9c46-06889b4ce3a4/1a7ad60df284ca6b00ca5d31cc1b1c7c/aspnetcore-runtime-6.0.9-linux-x64.tar.gz;subdir=aspnet-${PV}"

SRC_URI[md5sum] = "f9c6e5b3b298bde763296c9d06c41b9d"
SRC_URI[sha256sum] = "9e05b2f6d80e50b112064a92b14dd758dd75253303fa7cd86d0c24c1baf92a51"
