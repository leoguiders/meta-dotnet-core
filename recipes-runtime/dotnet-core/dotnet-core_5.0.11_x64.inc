###################################################################################################
# Contains the URL and checksums to download version 5.0.11 of the x86 64-bit .Net Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 5.0.11 by Jan Philipp Giel 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/4652f15f-0061-4b13-aa61-0c1d23c3b290/af67e2036f0086a3794ba988233b41ae/dotnet-runtime-5.0.11-linux-x64.tar.gz;subdir=dotnet-${PV}"

SRC_URI[md5sum] = "fcd4c38a8e2328ac4c1af957f61bd1bb"
SRC_URI[sha256sum] = "7da7bc862ccbc58cbf09d713cb77d6473a80233cb132ffc3accd124a0d6b1b80"
