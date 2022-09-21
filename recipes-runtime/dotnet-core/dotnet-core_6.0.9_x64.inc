###################################################################################################
# Contains the URL and checksums to download version 6.0.9 of the x86 64-bit .Net Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 6.0.9 by Jan Philipp Giel 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/05f1a3dd-75f2-49f4-a976-25ce08f77cbb/b6e8e327a84b91513c2744bfccf90140/dotnet-runtime-6.0.9-linux-x64.tar.gz;subdir=dotnet-${PV}"

SRC_URI[md5sum] = "eb5cee1e70264fc51a5f2e584d54f2ca"
SRC_URI[sha256sum] = "3ffe807c2f0efc81410d31d96f7c1278cd1a2357d71da790e59b04e48d3231c5"
